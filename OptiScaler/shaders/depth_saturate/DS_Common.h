#pragma once
#include "../pch.h"
#include <d3dcompiler.h>
#include <DirectXMath.h>

using namespace DirectX;

inline static std::string shaderCode = R"(
// Input texture
Texture2D<float> SourceTexture : register(t0);

// Output texture
RWTexture2D<float> DestinationTexture : register(u0);

//static const float maxFloatValue = 3.402823466e+38f;  // FLT_MAX
static const float maxFloatValue = 10000.0f;  // FLT_MAX

// Compute shader thread group size
[numthreads(16, 16, 1)]
void CSMain(uint3 dispatchThreadID : SV_DispatchThreadID)
{
    // The dispatchThreadID.xy are the pixel coordinates
    uint2 pixelCoord = dispatchThreadID.xy;

    // Load the pixel value from the source texture
    float srcColor = SourceTexture.Load(int3(pixelCoord, 0));
    float normalizedColor = srcColor / maxFloatValue;

    // Write the pixel value to the destination texture
    DestinationTexture[pixelCoord] = saturate(normalizedColor);
}
)";

inline static ID3DBlob* DS_CompileShader(const char* shaderCode, const char* entryPoint, const char* target)
{
    ID3DBlob* shaderBlob = nullptr;
    ID3DBlob* errorBlob = nullptr;

    HRESULT hr = D3DCompile(shaderCode, strlen(shaderCode), nullptr, nullptr, nullptr, entryPoint, target, D3DCOMPILE_OPTIMIZATION_LEVEL3, 0, &shaderBlob, &errorBlob);

    if (FAILED(hr))
    {
        LOG_ERROR("error while compiling shader");

        if (errorBlob)
        {
            LOG_ERROR("error while compiling shader : {0}", (char*)errorBlob->GetBufferPointer());
            errorBlob->Release();
        }

        if (shaderBlob)
            shaderBlob->Release();

        return nullptr;
    }

    if (errorBlob)
        errorBlob->Release();

    return shaderBlob;
}