/*********************************************************************************************************\
|*                                                                                                        *|
|* SPDX-FileCopyrightText: Copyright (c) 2019-2024 NVIDIA CORPORATION & AFFILIATES. All rights reserved.  *|
|* SPDX-License-Identifier: MIT                                                                           *|
|*                                                                                                        *|
|* Permission is hereby granted, free of charge, to any person obtaining a                                *|
|* copy of this software and associated documentation files (the "Software"),                             *|
|* to deal in the Software without restriction, including without limitation                              *|
|* the rights to use, copy, modify, merge, publish, distribute, sublicense,                               *|
|* and/or sell copies of the Software, and to permit persons to whom the                                  *|
|* Software is furnished to do so, subject to the following conditions:                                   *|
|*                                                                                                        *|
|* The above copyright notice and this permission notice shall be included in                             *|
|* all copies or substantial portions of the Software.                                                    *|
|*                                                                                                        *|
|* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR                             *|
|* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,                               *|
|* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL                               *|
|* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER                             *|
|* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING                                *|
|* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER                                    *|
|* DEALINGS IN THE SOFTWARE.                                                                              *|
|*                                                                                                        *|
|*                                                                                                        *|
\*********************************************************************************************************/

#ifndef _NVAPI_INTERFACE_H
#define _NVAPI_INTERFACE_H

struct NVAPI_INTERFACE_TABLE { const char * func; unsigned int id; };
struct NVAPI_INTERFACE_TABLE nvapi_interface_table[] =
{
    { "NvAPI_Initialize", 0x0150e828 },
    { "NvAPI_Unload", 0xd22bdd7e },
    { "NvAPI_GetErrorMessage", 0x6c2d048c },
    { "NvAPI_GetInterfaceVersionString", 0x01053fa5 },
    { "NvAPI_GPU_GetEDID", 0x37d32e69 },
    { "NvAPI_SetView", 0x0957d7b6 },
    { "NvAPI_SetViewEx", 0x06b89e68 },
    { "NvAPI_GetDisplayDriverVersion", 0xf951a4d1 },
    { "NvAPI_SYS_GetDriverAndBranchVersion", 0x2926aaad },
    { "NvAPI_GPU_GetMemoryInfo", 0x07f9b368 },
    { "NvAPI_GPU_GetMemoryInfoEx", 0xc0599498 },
    { "NvAPI_OGL_ExpertModeSet", 0x3805ef7a },
    { "NvAPI_OGL_ExpertModeGet", 0x22ed9516 },
    { "NvAPI_OGL_ExpertModeDefaultsSet", 0xb47a657e },
    { "NvAPI_OGL_ExpertModeDefaultsGet", 0xae921f12 },
    { "NvAPI_EnumPhysicalGPUs", 0xe5ac921f },
    { "NvAPI_EnumTCCPhysicalGPUs", 0xd9930b07 },
    { "NvAPI_EnumLogicalGPUs", 0x48b3ea59 },
    { "NvAPI_GetPhysicalGPUsFromDisplay", 0x34ef9506 },
    { "NvAPI_GetPhysicalGPUFromUnAttachedDisplay", 0x5018ed61 },
    { "NvAPI_GetLogicalGPUFromDisplay", 0xee1370cf },
    { "NvAPI_GetLogicalGPUFromPhysicalGPU", 0xadd604d1 },
    { "NvAPI_GetPhysicalGPUsFromLogicalGPU", 0xaea3fa32 },
    { "NvAPI_GetPhysicalGPUFromGPUID", 0x5380ad1a },
    { "NvAPI_GetGPUIDfromPhysicalGPU", 0x6533ea3e },
    { "NvAPI_GPU_GetShaderSubPipeCount", 0x0be17923 },
    { "NvAPI_GPU_GetGpuCoreCount", 0xc7026a87 },
    { "NvAPI_GPU_GetAllOutputs", 0x7d554f8e },
    { "NvAPI_GPU_GetConnectedOutputs", 0x1730bfc9 },
    { "NvAPI_GPU_GetConnectedSLIOutputs", 0x0680de09 },
    { "NvAPI_GPU_GetConnectedDisplayIds", 0x0078dba2 },
    { "NvAPI_GPU_GetAllDisplayIds", 0x785210a2 },
    { "NvAPI_GPU_GetConnectedOutputsWithLidState", 0xcf8caf39 },
    { "NvAPI_GPU_GetConnectedSLIOutputsWithLidState", 0x96043cc7 },
    { "NvAPI_GPU_GetSystemType", 0xbaaabfcc },
    { "NvAPI_GPU_GetActiveOutputs", 0xe3e89b6f },
    { "NvAPI_GPU_SetEDID", 0xe83d6456 },
    { "NvAPI_GPU_GetOutputType", 0x40a505e4 },
    { "NvAPI_GPU_ValidateOutputCombination", 0x34c9c2d4 },
    { "NvAPI_GPU_GetFullName", 0xceee8e9f },
    { "NvAPI_GPU_GetPCIIdentifiers", 0x2ddfb66e },
    { "NvAPI_GPU_GetGPUType", 0xc33baeb1 },
    { "NvAPI_GPU_GetBusType", 0x1bb18724 },
    { "NvAPI_GPU_GetBusId", 0x1be0b8e5 },
    { "NvAPI_GPU_GetBusSlotId", 0x2a0a350f },
    { "NvAPI_GPU_GetIRQ", 0xe4715417 },
    { "NvAPI_GPU_GetVbiosRevision", 0xacc3da0a },
    { "NvAPI_GPU_GetVbiosOEMRevision", 0x2d43fb31 },
    { "NvAPI_GPU_GetVbiosVersionString", 0xa561fd7d },
    { "NvAPI_GPU_GetAGPAperture", 0x6e042794 },
    { "NvAPI_GPU_GetCurrentAGPRate", 0xc74925a0 },
    { "NvAPI_GPU_GetCurrentPCIEDownstreamWidth", 0xd048c3b1 },
    { "NvAPI_GPU_GetPhysicalFrameBufferSize", 0x46fbeb03 },
    { "NvAPI_GPU_GetVirtualFrameBufferSize", 0x5a04b644 },
    { "NvAPI_GPU_GetQuadroStatus", 0xe332fa47 },
    { "NvAPI_GPU_GetBoardInfo", 0x22d54523 },
    { "NvAPI_GPU_GetRamBusWidth", 0x7975c581 },
    { "NvAPI_GPU_GetArchInfo", 0xd8265d24 },
    { "NvAPI_I2CRead", 0x2fde12c5 },
    { "NvAPI_I2CWrite", 0xe812eb07 },
    { "NvAPI_GPU_WorkstationFeatureSetup", 0x6c1f3fe4 },
    { "NvAPI_GPU_WorkstationFeatureQuery", 0x004537df },
    { "NvAPI_GPU_GetHDCPSupportStatus", 0xf089eef5 },
    { "NvAPI_GPU_CudaEnumComputeCapableGpus", 0x5786cc6e },
    { "NvAPI_GPU_GetTachReading", 0x5f608315 },
    { "NvAPI_GPU_GetECCStatusInfo", 0xca1ddaf3 },
    { "NvAPI_GPU_GetECCErrorInfo", 0xc71f85a6 },
    { "NvAPI_GPU_ResetECCErrorInfo", 0xc02eec20 },
    { "NvAPI_GPU_GetECCConfigurationInfo", 0x77a796f3 },
    { "NvAPI_GPU_SetECCConfiguration", 0x1cf639d9 },
    { "NvAPI_GPU_QueryWorkstationFeatureSupport", 0x80b1abb9 },
    { "NvAPI_GPU_SetScanoutIntensity", 0xa57457a4 },
    { "NvAPI_GPU_GetScanoutIntensityState", 0xe81ce836 },
    { "NvAPI_GPU_SetScanoutWarping", 0xb34bab4f },
    { "NvAPI_GPU_GetScanoutWarpingState", 0x6f5435af },
    { "NvAPI_GPU_SetScanoutCompositionParameter", 0xf898247d },
    { "NvAPI_GPU_GetScanoutCompositionParameter", 0x58fe51e6 },
    { "NvAPI_GPU_GetScanoutConfiguration", 0x6a9f5b63 },
    { "NvAPI_GPU_GetScanoutConfigurationEx", 0xe2e1e6f0 },
    { "NvAPI_GPU_GetAdapterIdFromPhysicalGpu", 0x0ff07fde },
    { "NvAPI_GPU_GetVirtualizationInfo", 0x44e022a9 },
    { "NvAPI_GPU_GetLogicalGpuInfo", 0x842b066e },
    { "NvAPI_GPU_GetLicensableFeatures", 0x3fc596aa },
    { "NvAPI_GPU_NVLINK_GetCaps", 0xbef1119d },
    { "NvAPI_GPU_NVLINK_GetStatus", 0xc72a38e3 },
    { "NvAPI_GPU_GetEncoderStatistics", 0xf0a9aeeb },
    { "NvAPI_GPU_GetEncoderSessionsInfo", 0xd8a72ce5 },
    { "NvAPI_GPU_GetGPUInfo", 0xafd1b02c },
    { "NvAPI_GPU_GetVRReadyData", 0x81d629c5 },
    { "NvAPI_GPU_GetGspFeatures", 0x581c4391 },
    { "NvAPI_GPU_GetPerfDecreaseInfo", 0x7f7f4600 },
    { "NvAPI_GPU_GetPstatesInfoEx", 0x843c0256 },
    { "NvAPI_GPU_GetPstates20", 0x6ff81213 },
    { "NvAPI_GPU_GetCurrentPstate", 0x927da4f6 },
    { "NvAPI_GPU_GetDynamicPstatesInfoEx", 0x60ded2ed },
    { "NvAPI_GPU_GetThermalSettings", 0xe3640a56 },
    { "NvAPI_GPU_GetAllClockFrequencies", 0xdcb616c3 },
    { "NvAPI_GPU_QueryIlluminationSupport", 0xa629da31 },
    { "NvAPI_GPU_GetIllumination", 0x9a1b9365 },
    { "NvAPI_GPU_SetIllumination", 0x0254a187 },
    { "NvAPI_GPU_ClientIllumDevicesGetInfo", 0xd4100e58 },
    { "NvAPI_GPU_ClientIllumDevicesGetControl", 0x73c01d58 },
    { "NvAPI_GPU_ClientIllumDevicesSetControl", 0x57024c62 },
    { "NvAPI_GPU_ClientIllumZonesGetInfo", 0x4b81241b },
    { "NvAPI_GPU_ClientIllumZonesGetControl", 0x3dbf5764 },
    { "NvAPI_GPU_ClientIllumZonesSetControl", 0x197d065e },
    { "NvAPI_Event_RegisterCallback", 0xe6dbea69 },
    { "NvAPI_Event_UnregisterCallback", 0xde1f9b45 },
    { "NvAPI_EnumNvidiaDisplayHandle", 0x9abdd40d },
    { "NvAPI_EnumNvidiaUnAttachedDisplayHandle", 0x20de9260 },
    { "NvAPI_CreateDisplayFromUnAttachedDisplay", 0x63f9799e },
    { "NvAPI_GetAssociatedNvidiaDisplayHandle", 0x35c29134 },
    { "NvAPI_DISP_GetAssociatedUnAttachedNvidiaDisplayHandle", 0xa70503b2 },
    { "NvAPI_GetAssociatedNvidiaDisplayName", 0x22a78b05 },
    { "NvAPI_GetUnAttachedAssociatedDisplayName", 0x4888d790 },
    { "NvAPI_EnableHWCursor", 0x2863148d },
    { "NvAPI_DisableHWCursor", 0xab163097 },
    { "NvAPI_GetVBlankCounter", 0x67b5db55 },
    { "NvAPI_SetRefreshRateOverride", 0x3092ac32 },
    { "NvAPI_GetAssociatedDisplayOutputId", 0xd995937e },
    { "NvAPI_GetDisplayPortInfo", 0xc64ff367 },
    { "NvAPI_SetDisplayPort", 0xfa13e65a },
    { "NvAPI_GetHDMISupportInfo", 0x6ae16ec3 },
    { "NvAPI_Disp_InfoFrameControl", 0x6067af3f },
    { "NvAPI_Disp_ColorControl", 0x92f9d80d },
    { "NvAPI_Disp_GetHdrCapabilities", 0x84f2a8df },
    { "NvAPI_Disp_HdrColorControl", 0x351da224 },
    { "NvAPI_Disp_SetSourceColorSpace", 0x473b6caf },
    { "NvAPI_Disp_GetSourceColorSpace", 0xceedc85b },
    { "NvAPI_Disp_SetSourceHdrMetadata", 0x905eb63b },
    { "NvAPI_Disp_GetSourceHdrMetadata", 0x0d3f52da },
    { "NvAPI_Disp_SetOutputMode", 0x98e7661a },
    { "NvAPI_Disp_GetOutputMode", 0x81fed88d },
    { "NvAPI_Disp_SetHdrToneMapping", 0xdd6da362 },
    { "NvAPI_Disp_GetHdrToneMapping", 0xfbd36e71 },
    { "NvAPI_DISP_GetTiming", 0x175167e9 },
    { "NvAPI_DISP_GetMonitorCapabilities", 0x3b05c7e1 },
    { "NvAPI_DISP_GetMonitorColorCapabilities", 0x6ae4cfb5 },
    { "NvAPI_DISP_EnumCustomDisplay", 0xa2072d59 },
    { "NvAPI_DISP_TryCustomDisplay", 0x1f7db630 },
    { "NvAPI_DISP_DeleteCustomDisplay", 0x552e5b9b },
    { "NvAPI_DISP_SaveCustomDisplay", 0x49882876 },
    { "NvAPI_DISP_RevertCustomDisplayTrial", 0xcbbd40f0 },
    { "NvAPI_GetView", 0xd6b99d89 },
    { "NvAPI_GetViewEx", 0xdbbc0af4 },
    { "NvAPI_GetSupportedViews", 0x66fb7fc0 },
    { "NvAPI_DISP_GetDisplayIdByDisplayName", 0xae457190 },
    { "NvAPI_DISP_GetGDIPrimaryDisplayId", 0x1e9d8a31 },
    { "NvAPI_DISP_GetDisplayConfig", 0x11abccf8 },
    { "NvAPI_DISP_SetDisplayConfig", 0x5d8cf8de },
    { "NvAPI_DISP_GetEdidData", 0x436ced76 },
    { "NvAPI_DISP_GetAdaptiveSyncData", 0xb73d1ee9 },
    { "NvAPI_DISP_SetAdaptiveSyncData", 0x3eebba1d },
    { "NvAPI_DISP_GetVirtualRefreshRateData", 0x8c00429a },
    { "NvAPI_DISP_SetVirtualRefreshRateData", 0x5abbe6a3 },
    { "NvAPI_DISP_SetPreferredStereoDisplay", 0xc9d0e25f },
    { "NvAPI_DISP_GetPreferredStereoDisplay", 0x1f6b4666 },
    { "NvAPI_DISP_GetNvManagedDedicatedDisplays", 0xdbdf0cb2 },
    { "NvAPI_DISP_AcquireDedicatedDisplay", 0x47c917ba },
    { "NvAPI_DISP_ReleaseDedicatedDisplay", 0x1247825f },
    { "NvAPI_DISP_GetNvManagedDedicatedDisplayMetadata", 0xd645d80c },
    { "NvAPI_DISP_SetNvManagedDedicatedDisplayMetadata", 0x3d8b129a },
    { "NvAPI_Disp_GetDisplayIdInfo", 0xbae8aa5e },
    { "NvAPI_Disp_GetDisplayIdsFromTarget", 0xe7e5f89e },
    { "NvAPI_Disp_GetVRRInfo", 0xdf8fda57 },
    { "NvAPI_Mosaic_GetSupportedTopoInfo", 0xfdb63c81 },
    { "NvAPI_Mosaic_GetTopoGroup", 0xcb89381d },
    { "NvAPI_Mosaic_GetOverlapLimits", 0x989685f0 },
    { "NvAPI_Mosaic_SetCurrentTopo", 0x9b542831 },
    { "NvAPI_Mosaic_GetCurrentTopo", 0xec32944e },
    { "NvAPI_Mosaic_EnableCurrentTopo", 0x5f1aa66c },
    { "NvAPI_Mosaic_GetDisplayViewportsByResolution", 0xdc6dc8d3 },
    { "NvAPI_Mosaic_SetDisplayGrids", 0x4d959a89 },
    { "NvAPI_Mosaic_ValidateDisplayGrids", 0xcf43903d },
    { "NvAPI_Mosaic_EnumDisplayModes", 0x78db97d7 },
    { "NvAPI_Mosaic_EnumDisplayGrids", 0xdf2887af },
    { "NvAPI_GetSupportedMosaicTopologies", 0x410b5c25 },
    { "NvAPI_GetCurrentMosaicTopology", 0xf60852bd },
    { "NvAPI_SetCurrentMosaicTopology", 0xd54b8989 },
    { "NvAPI_EnableCurrentMosaicTopology", 0x74073cc9 },
    { "NvAPI_GSync_EnumSyncDevices", 0xd9639601 },
    { "NvAPI_GSync_QueryCapabilities", 0x44a3f1d1 },
    { "NvAPI_GSync_GetTopology", 0x4562bc38 },
    { "NvAPI_GSync_SetSyncStateSettings", 0x60acdfdd },
    { "NvAPI_GSync_GetControlParameters", 0x16de1c6a },
    { "NvAPI_GSync_SetControlParameters", 0x8bbff88b },
    { "NvAPI_GSync_AdjustSyncDelay", 0x2d11ff51 },
    { "NvAPI_GSync_GetSyncStatus", 0xf1f5b434 },
    { "NvAPI_GSync_GetStatusParameters", 0x70d404ec },
    { "NvAPI_D3D_GetCurrentSLIState", 0x4b708b54 },
    { "NvAPI_D3D9_RegisterResource", 0xa064bdfc },
    { "NvAPI_D3D9_UnregisterResource", 0xbb2b17aa },
    { "NvAPI_D3D9_AliasSurfaceAsTexture", 0xe5ceae41 },
    { "NvAPI_D3D9_StretchRectEx", 0x22de03aa },
    { "NvAPI_D3D9_ClearRT", 0x332d3942 },
    { "NvAPI_D3D_GetObjectHandleForResource", 0xfceac864 },
    { "NvAPI_D3D_SetResourceHint", 0x6c0ed98c },
    { "NvAPI_D3D_BeginResourceRendering", 0x91123d6a },
    { "NvAPI_D3D_EndResourceRendering", 0x37e7191c },
    { "NvAPI_D3D9_GetSurfaceHandle", 0x0f2dd3f2 },
    { "NvAPI_D3D9_VideoSetStereoInfo", 0xb852f4db },
    { "NvAPI_D3D10_SetDepthBoundsTest", 0x4eadf5d2 },
    { "NvAPI_D3D11_CreateDevice", 0x6a16d3a0 },
    { "NvAPI_D3D11_CreateDeviceAndSwapChain", 0xbb939ee5 },
    { "NvAPI_D3D11_SetDepthBoundsTest", 0x7aaf7a04 },
    { "NvAPI_D3D11_IsNvShaderExtnOpCodeSupported", 0x5f68da40 },
    { "NvAPI_D3D11_SetNvShaderExtnSlot", 0x8e90bb9f },
    { "NvAPI_D3D12_SetNvShaderExtnSlotSpace", 0xac2dfeb5 },
    { "NvAPI_D3D12_SetNvShaderExtnSlotSpaceLocalThread", 0x43d867c0 },
    { "NvAPI_D3D11_SetNvShaderExtnSlotLocalThread", 0x0e6482a0 },
    { "NvAPI_D3D11_BeginUAVOverlapEx", 0xba08208a },
    { "NvAPI_D3D11_BeginUAVOverlap", 0x65b93ca8 },
    { "NvAPI_D3D11_EndUAVOverlap", 0x2216a357 },
    { "NvAPI_D3D11_GetResourceHandle", 0x09d52986 },
    { "NvAPI_D3D_SetFPSIndicatorState", 0xa776e8db },
    { "NvAPI_D3D9_Present", 0x05650beb },
    { "NvAPI_D3D9_QueryFrameCount", 0x9083e53a },
    { "NvAPI_D3D9_ResetFrameCount", 0xfa6a0675 },
    { "NvAPI_D3D9_QueryMaxSwapGroup", 0x5995410d },
    { "NvAPI_D3D9_QuerySwapGroup", 0xeba4d232 },
    { "NvAPI_D3D9_JoinSwapGroup", 0x7d44bb54 },
    { "NvAPI_D3D9_BindSwapBarrier", 0x9c39c246 },
    { "NvAPI_D3D_SetVerticalSyncMode", 0x5526cfd1 },
    { "NvAPI_D3D1x_Present", 0x03b845a1 },
    { "NvAPI_D3D1x_QueryFrameCount", 0x9152e055 },
    { "NvAPI_D3D1x_ResetFrameCount", 0xfbbb031a },
    { "NvAPI_D3D1x_QueryMaxSwapGroup", 0x9bb9d68f },
    { "NvAPI_D3D1x_QuerySwapGroup", 0x407f67aa },
    { "NvAPI_D3D1x_JoinSwapGroup", 0x14610cd7 },
    { "NvAPI_D3D1x_BindSwapBarrier", 0x9de8c729 },
    { "NvAPI_D3D12_QueryPresentBarrierSupport", 0xa15faef7 },
    { "NvAPI_D3D12_CreatePresentBarrierClient", 0x4d815de9 },
    { "NvAPI_D3D12_RegisterPresentBarrierResources", 0xd53c9ef0 },
    { "NvAPI_DestroyPresentBarrierClient", 0x3c5c351b },
    { "NvAPI_JoinPresentBarrier", 0x17f6bf82 },
    { "NvAPI_LeavePresentBarrier", 0xc3ec5a7f },
    { "NvAPI_QueryPresentBarrierFrameStatistics", 0x61b844a1 },
    { "NvAPI_D3D12_CreateDDisplayPresentBarrierClient", 0xb5a21987 },
    { "NvAPI_D3D11_CreateRasterizerState", 0xdb8d28af },
    { "NvAPI_D3D_ConfigureAnsel", 0x341c6c7f },
    { "NvAPI_D3D11_CreateTiledTexture2DArray", 0x7886981a },
    { "NvAPI_D3D11_CheckFeatureSupport", 0x106a487e },
    { "NvAPI_D3D11_CreateImplicitMSAATexture2D", 0xb8f79632 },
    { "NvAPI_D3D12_CreateCommittedImplicitMSAATexture2D", 0x24c6a07b },
    { "NvAPI_D3D11_ResolveSubresourceRegion", 0xe6bfedd6 },
    { "NvAPI_D3D12_ResolveSubresourceRegion", 0xc24a15bf },
    { "NvAPI_D3D11_TiledTexture2DArrayGetDesc", 0xf1a2b9d5 },
    { "NvAPI_D3D11_UpdateTileMappings", 0x9a06ea07 },
    { "NvAPI_D3D11_CopyTileMappings", 0xc09ee6bc },
    { "NvAPI_D3D11_TiledResourceBarrier", 0xd6839099 },
    { "NvAPI_D3D11_AliasMSAATexture2DAsNonMSAA", 0xf1c54fc9 },
    { "NvAPI_D3D11_CreateGeometryShaderEx_2", 0x99ed5c1c },
    { "NvAPI_D3D11_CreateVertexShaderEx", 0x0beaa0b2 },
    { "NvAPI_D3D11_CreateHullShaderEx", 0xb53cab00 },
    { "NvAPI_D3D11_CreateDomainShaderEx", 0xa0d7180d },
    { "NvAPI_D3D11_CreatePixelShaderEx_2", 0x4162822b },
    { "NvAPI_D3D11_CreateFastGeometryShaderExplicit", 0x71ab7c9c },
    { "NvAPI_D3D11_CreateFastGeometryShader", 0x525d43be },
    { "NvAPI_D3D11_DecompressView", 0x3a94e822 },
    { "NvAPI_D3D12_CreateGraphicsPipelineState", 0x2fc28856 },
    { "NvAPI_D3D12_CreateComputePipelineState", 0x2762deac },
    { "NvAPI_D3D12_SetDepthBoundsTestValues", 0xb9333fe9 },
    { "NvAPI_D3D12_CreateReservedResource", 0x2c85f101 },
    { "NvAPI_D3D12_CreateHeap", 0x5cb397cf },
    { "NvAPI_D3D12_CreateHeap2", 0x924be9d6 },
    { "NvAPI_D3D12_QueryCpuVisibleVidmem", 0x26322bc3 },
    { "NvAPI_D3D12_ReservedResourceGetDesc", 0x9aa2aabb },
    { "NvAPI_D3D12_UpdateTileMappings", 0xc6017a7d },
    { "NvAPI_D3D12_CopyTileMappings", 0x47f78194 },
    { "NvAPI_D3D12_ResourceAliasingBarrier", 0xb942bab7 },
    { "NvAPI_D3D12_CaptureUAVInfo", 0x6e5ea9db },
    { "NvAPI_D3D11_GetResourceGPUVirtualAddressEx", 0xaf6d14da },
    { "NvAPI_D3D11_EnumerateMetaCommands", 0xc7453ba8 },
    { "NvAPI_D3D11_CreateMetaCommand", 0xf505fba0 },
    { "NvAPI_D3D11_InitializeMetaCommand", 0xaec629e9 },
    { "NvAPI_D3D11_ExecuteMetaCommand", 0x82236c47 },
    { "NvAPI_D3D12_EnumerateMetaCommands", 0xcd9141d8 },
    { "NvAPI_D3D12_CreateMetaCommand", 0xeb29634b },
    { "NvAPI_D3D12_InitializeMetaCommand", 0xa4125399 },
    { "NvAPI_D3D12_ExecuteMetaCommand", 0xde24fc3d },
    { "NvAPI_D3D12_CreateCommittedResource", 0x027e98ae },
    { "NvAPI_D3D12_GetCopyableFootprints", 0xf6305eb5 },
    { "NvAPI_D3D12_CopyTextureRegion", 0x82b91b25 },
    { "NvAPI_D3D12_IsNvShaderExtnOpCodeSupported", 0x3dfacec8 },
    { "NvAPI_D3D12_GetOptimalThreadCountForMesh", 0xb43995cb },
    { "NvAPI_D3D_IsGSyncCapable", 0x9c1eed78 },
    { "NvAPI_D3D_IsGSyncActive", 0xe942b0ff },
    { "NvAPI_D3D1x_DisableShaderDiskCache", 0xd0cbca7d },
    { "NvAPI_D3D11_MultiGPU_GetCaps", 0xd2d25687 },
    { "NvAPI_D3D11_MultiGPU_Init", 0x017be49e },
    { "NvAPI_D3D11_CreateMultiGPUDevice", 0xbdb20007 },
    { "NvAPI_D3D_QuerySinglePassStereoSupport", 0x6f5f0a6d },
    { "NvAPI_D3D_SetSinglePassStereoMode", 0xa39e6e6e },
    { "NvAPI_D3D12_QuerySinglePassStereoSupport", 0x3b03791b },
    { "NvAPI_D3D12_SetSinglePassStereoMode", 0x83556d87 },
    { "NvAPI_D3D_QueryMultiViewSupport", 0xb6e0a41c },
    { "NvAPI_D3D_SetMultiViewMode", 0x8285c8da },
    { "NvAPI_D3D_QueryModifiedWSupport", 0xcbf9f4f5 },
    { "NvAPI_D3D_SetModifiedWMode", 0x06ea4bf4 },
    { "NvAPI_D3D12_QueryModifiedWSupport", 0x51235248 },
    { "NvAPI_D3D12_SetModifiedWMode", 0xe1fdaba7 },
    { "NvAPI_D3D_CreateLateLatchObject", 0x2db27d09 },
    { "NvAPI_D3D_QueryLateLatchSupport", 0x8ceca0ec },
    { "NvAPI_D3D_RegisterDevice", 0x8c02c4d0 },
    { "NvAPI_D3D11_MultiDrawInstancedIndirect", 0xd4e26bbf },
    { "NvAPI_D3D11_MultiDrawIndexedInstancedIndirect", 0x59e890f9 },
    { "NvAPI_D3D_ImplicitSLIControl", 0x2aede111 },
    { "NvAPI_D3D12_GetNeedsAppFPBlendClamping", 0x6ef4d2d1 },
    { "NvAPI_D3D12_UseDriverHeapPriorities", 0xf0d978a8 },
    { "NvAPI_D3D12_Mosaic_GetCompanionAllocations", 0xa46022c7 },
    { "NvAPI_D3D12_Mosaic_GetViewportAndGpuPartitions", 0xb092b818 },
    { "NvAPI_D3D1x_GetGraphicsCapabilities", 0x52b1499a },
    { "NvAPI_D3D12_GetGraphicsCapabilities", 0x01e87354 },
    { "NvAPI_D3D11_RSSetExclusiveScissorRects", 0xae4d73ef },
    { "NvAPI_D3D11_RSSetViewportsPixelShadingRates", 0x34f7938f },
    { "NvAPI_D3D11_CreateShadingRateResourceView", 0x99ca2dff },
    { "NvAPI_D3D11_RSSetShadingRateResourceView", 0x1b0c2f83 },
    { "NvAPI_D3D11_RSGetPixelShadingRateSampleOrder", 0x092442a1 },
    { "NvAPI_D3D11_RSSetPixelShadingRateSampleOrder", 0xa942373a },
    { "NvAPI_D3D_InitializeVRSHelper", 0x4780d70b },
    { "NvAPI_D3D_InitializeNvGazeHandler", 0x5b3b7479 },
    { "NvAPI_D3D_InitializeSMPAssist", 0x42763d0c },
    { "NvAPI_D3D_QuerySMPAssistSupport", 0xc57921de },
    { "NvAPI_D3D_GetSleepStatus", 0xaef96ca1 },
    { "NvAPI_D3D_SetSleepMode", 0xac1ca9e0 },
    { "NvAPI_D3D_Sleep", 0x852cd1d2 },
    { "NvAPI_D3D_SetReflexSync", 0xb9f6faff },
    { "NvAPI_D3D_GetLatency", 0x1a587f9c },
    { "NvAPI_D3D_SetLatencyMarker", 0xd9984c05 },
    { "NvAPI_D3D12_SetAsyncFrameMarker", 0x13c98f73 },
    { "NvAPI_D3D11_SetAsyncFrameMarker", 0x59c2c510 },
    { "NvAPI_D3D12_NotifyOutOfBandCommandQueue", 0x03d6e8cb },
    { "NvAPI_D3D12_SetCreateCommandQueueLowLatencyHint", 0x548c224f },
    { "NvAPI_D3D12_CreateCubinComputeShaderExV2", 0x299f5fdc },
    { "NvAPI_D3D12_CreateCubinComputeShader", 0x2a2c79e8 },
    { "NvAPI_D3D12_CreateCubinComputeShaderEx", 0x3151211b },
    { "NvAPI_D3D12_CreateCubinComputeShaderWithName", 0x1dc7261f },
    { "NvAPI_D3D12_LaunchCubinShader", 0x5c52bb86 },
    { "NvAPI_D3D12_DestroyCubinComputeShader", 0x7fb785ba },
    { "NvAPI_D3D12_GetCudaMergedTextureSamplerObject", 0x329fe6e0 },
    { "NvAPI_D3D12_GetCudaIndependentDescriptorObject", 0x0ddac234 },
    { "NvAPI_D3D12_GetCudaTextureObject", 0x80403fc9 },
    { "NvAPI_D3D12_GetCudaSurfaceObject", 0x48f5b2ee },
    { "NvAPI_D3D12_IsFatbinPTXSupported", 0x70c07832 },
    { "NvAPI_D3D12_CreateCuModule", 0xad1a677d },
    { "NvAPI_D3D12_EnumFunctionsInModule", 0x7ab88d88 },
    { "NvAPI_D3D12_CreateCuFunction", 0xe2436e22 },
    { "NvAPI_D3D12_LaunchCuKernelChain", 0x24973538 },
    { "NvAPI_D3D12_LaunchCuKernelChainEx", 0x846a9bf0 },
    { "NvAPI_D3D12_DestroyCuModule", 0x41c65285 },
    { "NvAPI_D3D12_DestroyCuFunction", 0xdf295ea6 },
    { "NvAPI_D3D11_CreateCubinComputeShaderExV2", 0xf2c71d48 },
    { "NvAPI_D3D11_CreateCubinComputeShader", 0x0ed98181 },
    { "NvAPI_D3D11_CreateCubinComputeShaderEx", 0x32c2a0f6 },
    { "NvAPI_D3D11_CreateCubinComputeShaderWithName", 0xb672be19 },
    { "NvAPI_D3D11_LaunchCubinShader", 0x427e236d },
    { "NvAPI_D3D11_DestroyCubinComputeShader", 0x01682c86 },
    { "NvAPI_D3D11_IsFatbinPTXSupported", 0x6086bd93 },
    { "NvAPI_D3D11_GetCudaIndependentViewObject", 0x34d2afa8 },
    { "NvAPI_D3D11_GetCudaMergedTextureSamplerObject", 0x5d637d8f },
    { "NvAPI_D3D11_CreateUnorderedAccessView", 0x74a497a1 },
    { "NvAPI_D3D11_CreateShaderResourceView", 0x65cb431e },
    { "NvAPI_D3D11_CreateSamplerState", 0x89eca416 },
    { "NvAPI_D3D11_GetCudaTextureObject", 0x9006fa68 },
    { "NvAPI_D3D11_GetResourceGPUVirtualAddress", 0x1819b423 },
    { "NvAPI_D3D12_GetRaytracingCaps", 0x85a6c2a0 },
    { "NvAPI_D3D12_EnableRaytracingValidation", 0x1de5991b },
    { "NvAPI_D3D12_RegisterRaytracingValidationMessageCallback", 0x8554eb38 },
    { "NvAPI_D3D12_UnregisterRaytracingValidationMessageCallback", 0x26975da6 },
    { "NvAPI_D3D12_FlushRaytracingValidationMessages", 0xb8fb1fcb },
    { "NvAPI_D3D12_GetRaytracingDisplacementMicromapArrayPrebuildInfo", 0xfa99b6de },
    { "NvAPI_D3D12_GetRaytracingOpacityMicromapArrayPrebuildInfo", 0x4726d180 },
    { "NvAPI_D3D12_SetCreatePipelineStateOptions", 0x5c607a27 },
    { "NvAPI_D3D12_CheckDriverMatchingIdentifierEx", 0xafb237d4 },
    { "NvAPI_D3D12_GetRaytracingAccelerationStructurePrebuildInfoEx", 0x8d025b77 },
    { "NvAPI_D3D12_BuildRaytracingOpacityMicromapArray", 0x814f8d11 },
    { "NvAPI_D3D12_RelocateRaytracingOpacityMicromapArray", 0x0425c538 },
    { "NvAPI_D3D12_BuildRaytracingDisplacementMicromapArray", 0x066f569d },
    { "NvAPI_D3D12_RelocateRaytracingDisplacementMicromapArray", 0x1c142308 },
    { "NvAPI_D3D12_EmitRaytracingDisplacementMicromapArrayPostbuildInfo", 0x68b9a790 },
    { "NvAPI_D3D12_EmitRaytracingOpacityMicromapArrayPostbuildInfo", 0x1d9a39b6 },
    { "NvAPI_D3D12_BuildRaytracingAccelerationStructureEx", 0xe24ead45 },
    { "NvAPI_D3D12_QueryWorkstationFeatureProperties", 0xa92ea23a },
    { "NvAPI_D3D12_CreateCommittedRDMABuffer", 0xe78dcb44 },
    { "NvAPI_D3D12_ConvertCooperativeVectorMatrix", 0x0f252cb3 },
    { "NvAPI_D3D12_ConvertCooperativeVectorMatrixMultiple", 0x96ba5235 },
    { "NvAPI_D3D12_GetPhysicalDeviceCooperativeVectorProperties", 0x8f182aec },
    { "NvAPI_D3D12_GetRaytracingMultiIndirectClusterOperationRequirementsInfo", 0x5c9163f4 },
    { "NvAPI_D3D12_RaytracingExecuteMultiIndirectClusterOperation", 0x67c798af },
    { "NvAPI_D3D12_GetRaytracingPartitionedTlasIndirectPrebuildInfo", 0xcdfdc5f2 },
    { "NvAPI_D3D12_BuildRaytracingPartitionedTlasIndirect", 0x7cfc6fc3 },
    { "NvAPI_NGX_GetNGXOverrideState", 0x3fd96fba },
    { "NvAPI_NGX_SetNGXOverrideState", 0xb60fcb4e },
    { "NvAPI_DirectD3D12GraphicsCommandList_Create", 0x74a4e712 },
    { "NvAPI_DirectD3D12GraphicsCommandList_Release", 0x99da3dde },
    { "NvAPI_DirectD3D12GraphicsCommandList_Reset", 0x999c26d8 },
    { "NvAPI_VIO_GetCapabilities", 0x1dc91303 },
    { "NvAPI_VIO_Open", 0x44ee4841 },
    { "NvAPI_VIO_Close", 0xd01bd237 },
    { "NvAPI_VIO_Status", 0x0e6ce4f1 },
    { "NvAPI_VIO_SyncFormatDetect", 0x118d48a3 },
    { "NvAPI_VIO_GetConfig", 0xd34a789b },
    { "NvAPI_VIO_SetConfig", 0x0e4eec07 },
    { "NvAPI_VIO_SetCSC", 0xa1ec8d74 },
    { "NvAPI_VIO_GetCSC", 0x7b0d72a3 },
    { "NvAPI_VIO_SetGamma", 0x964bf452 },
    { "NvAPI_VIO_GetGamma", 0x51d53d06 },
    { "NvAPI_VIO_SetSyncDelay", 0x2697a8d1 },
    { "NvAPI_VIO_GetSyncDelay", 0x462214a9 },
    { "NvAPI_VIO_GetPCIInfo", 0xb981d935 },
    { "NvAPI_VIO_IsRunning", 0x96bd040e },
    { "NvAPI_VIO_Start", 0xcde8e1a3 },
    { "NvAPI_VIO_Stop", 0x6ba2a5d6 },
    { "NvAPI_VIO_IsFrameLockModeCompatible", 0x7bf0a94d },
    { "NvAPI_VIO_EnumDevices", 0xfd7c5557 },
    { "NvAPI_VIO_QueryTopology", 0x869534e2 },
    { "NvAPI_VIO_EnumSignalFormats", 0xead72fe4 },
    { "NvAPI_VIO_EnumDataFormats", 0x221fa8e8 },
    { "NvAPI_Stereo_CreateConfigurationProfileRegistryKey", 0xbe7692ec },
    { "NvAPI_Stereo_DeleteConfigurationProfileRegistryKey", 0xf117b834 },
    { "NvAPI_Stereo_SetConfigurationProfileValue", 0x24409f48 },
    { "NvAPI_Stereo_DeleteConfigurationProfileValue", 0x49bceecf },
    { "NvAPI_Stereo_Enable", 0x239c4545 },
    { "NvAPI_Stereo_Disable", 0x2ec50c2b },
    { "NvAPI_Stereo_IsEnabled", 0x348ff8e1 },
    { "NvAPI_Stereo_GetStereoSupport", 0x296c434d },
    { "NvAPI_Stereo_CreateHandleFromIUnknown", 0xac7e37f4 },
    { "NvAPI_Stereo_DestroyHandle", 0x3a153134 },
    { "NvAPI_Stereo_Activate", 0xf6a1ad68 },
    { "NvAPI_Stereo_Deactivate", 0x2d68de96 },
    { "NvAPI_Stereo_IsActivated", 0x1fb0bc30 },
    { "NvAPI_Stereo_GetSeparation", 0x451f2134 },
    { "NvAPI_Stereo_SetSeparation", 0x5c069fa3 },
    { "NvAPI_Stereo_DecreaseSeparation", 0xda044458 },
    { "NvAPI_Stereo_IncreaseSeparation", 0xc9a8ecec },
    { "NvAPI_Stereo_GetConvergence", 0x4ab00934 },
    { "NvAPI_Stereo_SetConvergence", 0x3dd6b54b },
    { "NvAPI_Stereo_DecreaseConvergence", 0x4c87e317 },
    { "NvAPI_Stereo_IncreaseConvergence", 0xa17daabe },
    { "NvAPI_Stereo_GetFrustumAdjustMode", 0xe6839b43 },
    { "NvAPI_Stereo_SetFrustumAdjustMode", 0x7be27fa2 },
    { "NvAPI_Stereo_CaptureJpegImage", 0x932cb140 },
    { "NvAPI_Stereo_InitActivation", 0xc7177702 },
    { "NvAPI_Stereo_Trigger_Activation", 0x0d6c6cd2 },
    { "NvAPI_Stereo_CapturePngImage", 0x8b7e99b5 },
    { "NvAPI_Stereo_ReverseStereoBlitControl", 0x3cd58f89 },
    { "NvAPI_Stereo_SetNotificationMessage", 0x6b9b409e },
    { "NvAPI_Stereo_SetActiveEye", 0x96eea9f8 },
    { "NvAPI_Stereo_SetDriverMode", 0x5e8f0bec },
    { "NvAPI_Stereo_GetEyeSeparation", 0xce653127 },
    { "NvAPI_Stereo_IsWindowedModeSupported", 0x40c8ed5e },
    { "NvAPI_Stereo_SetSurfaceCreationMode", 0xf5dcfcba },
    { "NvAPI_Stereo_GetSurfaceCreationMode", 0x36f1c736 },
    { "NvAPI_Stereo_Debug_WasLastDrawStereoized", 0xed4416c5 },
    { "NvAPI_Stereo_SetDefaultProfile", 0x44f0ecd1 },
    { "NvAPI_Stereo_GetDefaultProfile", 0x624e21c2 },
    { "NvAPI_D3D1x_CreateSwapChain", 0x1bc21b66 },
    { "NvAPI_D3D9_CreateSwapChain", 0x1a131e09 },
    { "NvAPI_Vulkan_InitLowLatencyDevice", 0x5c1696b6 },
    { "NvAPI_Vulkan_DestroyLowLatencyDevice", 0x11a5932b },
    { "NvAPI_Vulkan_GetSleepStatus", 0xadf966af },
    { "NvAPI_Vulkan_SetSleepMode", 0x2acfd162 },
    { "NvAPI_Vulkan_Sleep", 0x36732b1e },
    { "NvAPI_Vulkan_GetLatency", 0x3233d44a },
    { "NvAPI_Vulkan_SetLatencyMarker", 0xa17d13d6 },
    { "NvAPI_Vulkan_NotifyOutOfBandVkQueue", 0x5d6d3840 },
    { "NvAPI_DRS_CreateSession", 0x0694d52e },
    { "NvAPI_DRS_DestroySession", 0xdad9cff8 },
    { "NvAPI_DRS_LoadSettings", 0x375dbd6b },
    { "NvAPI_DRS_SaveSettings", 0xfcbc7e14 },
    { "NvAPI_DRS_LoadSettingsFromFile", 0xd3ede889 },
    { "NvAPI_DRS_SaveSettingsToFile", 0x2be25df8 },
    { "NvAPI_DRS_CreateProfile", 0xcc176068 },
    { "NvAPI_DRS_DeleteProfile", 0x17093206 },
    { "NvAPI_DRS_SetCurrentGlobalProfile", 0x1c89c5df },
    { "NvAPI_DRS_GetCurrentGlobalProfile", 0x617bff9f },
    { "NvAPI_DRS_GetProfileInfo", 0x61cd6fd6 },
    { "NvAPI_DRS_SetProfileInfo", 0x16abd3a9 },
    { "NvAPI_DRS_FindProfileByName", 0x7e4a9a0b },
    { "NvAPI_DRS_EnumProfiles", 0xbc371ee0 },
    { "NvAPI_DRS_GetNumProfiles", 0x1dae4fbc },
    { "NvAPI_DRS_CreateApplication", 0x4347a9de },
    { "NvAPI_DRS_DeleteApplicationEx", 0xc5ea85a1 },
    { "NvAPI_DRS_DeleteApplication", 0x2c694bc6 },
    { "NvAPI_DRS_GetApplicationInfo", 0xed1f8c69 },
    { "NvAPI_DRS_EnumApplications", 0x7fa2173a },
    { "NvAPI_DRS_FindApplicationByName", 0xeee566b2 },
    { "NvAPI_DRS_SetSetting", 0x577dd202 },
    { "NvAPI_DRS_GetSetting", 0x73bf8338 },
    { "NvAPI_DRS_EnumSettings", 0xae3039da },
    { "NvAPI_DRS_EnumAvailableSettingIds", 0xf020614a },
    { "NvAPI_DRS_EnumAvailableSettingValues", 0x2ec39f90 },
    { "NvAPI_DRS_GetSettingIdFromName", 0xcb7309cd },
    { "NvAPI_DRS_GetSettingNameFromId", 0xd61cbe6e },
    { "NvAPI_DRS_DeleteProfileSetting", 0xe4a26362 },
    { "NvAPI_DRS_RestoreAllDefaults", 0x5927b094 },
    { "NvAPI_DRS_RestoreProfileDefault", 0xfa5f6134 },
    { "NvAPI_DRS_RestoreProfileDefaultSetting", 0x53f0381e },
    { "NvAPI_DRS_GetBaseProfile", 0xda8466a0 },
    { "NvAPI_SYS_GetChipSetInfo", 0x53dabbca },
    { "NvAPI_SYS_GetLidAndDockInfo", 0xcda14d8a },
    { "NvAPI_SYS_GetDisplayIdFromGpuAndOutputId", 0x08f2bab4 },
    { "NvAPI_SYS_GetGpuAndOutputIdFromDisplayId", 0x112ba1a5 },
    { "NvAPI_SYS_GetPhysicalGpuFromDisplayId", 0x9ea74659 },
    { "NvAPI_SYS_GetDisplayDriverInfo", 0x721faceb },
    { "NvAPI_SYS_GetPhysicalGPUs", 0xd3b24d2d },
    { "NvAPI_SYS_GetLogicalGPUs", 0xccfffc10 },
    { "NvAPI_GPU_ClientRegisterForUtilizationSampleUpdates", 0xadeeaf67 },
    { "NvAPI_RegisterRiseCallback", 0x9cfe8f94 },
    { "NvAPI_RequestRise", 0x5047de98 },
    { "NvAPI_UninstallRise", 0xab8d09f6 },
};

#endif // _NVAPI_INTERFACE_H
