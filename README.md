![OmniScaler](images/omniscaler.png)

OmniScaler (was CyberXeSS) is drop-in DLSS2 to XeSS/FSR2 replacement for games. 

*This project is based on [PotatoOfDoom](https://github.com/PotatoOfDoom)'s excellent [CyberFSR2](https://github.com/PotatoOfDoom/CyberFSR2).*

### Official Discord Server: [DLSS2FSR](https://discord.gg/2JDHx6kcXB)

## How it works?
OmniScaler implement's all necessary API methods of DLSS2 & NVAPI to act as a man in the middle. So from games perspective it's using DLSS2 but actually using OmniScaler and calls are interpreted/redirected to XeSS & FSR2.

## Features
* An in-game menu for tuning and saving settings (Only on DirectX 11 & DirectX 12 APIs)
* Full integration with [DLSS Enabler](https://www.nexusmods.com/site/mods/757) for DLSS-FG support
* Fidelity FX CAS (Contrast Adaptive Sharpening) support for XeSS to mitigate relatively soft image upscaler generates
* A supersampling option for backends running on DirectX 12
* Autofixing colored lights on Unreal Engine & AMD graphics cards
* Autofixing wrong motion vector init information 
* Autofixing missing exposure texture information
* Ability to modify MipmapLODBias value of game

## Configuration
Please check [this](Config.md) document for configuation parameters and explanations.

## Which APIs and Upscalers are Supported?
Currently OmniScaler can be used with DirectX 11, DirectX 12 and Vulkan but each API has different sets of upscaler options.

#### For DirectX 11
* **FSR2 2.2.1** native Direct11 implementation (Default upscaler)
* **XeSS 1.x.x** with background DirectX12 processing [*]
* **FSR2 2.1.2** with background DirectX12 processing [*]
* **FSR2 2.2.1** with background DirectX12 processing [*]

[*] This implementations uses a background DirectX12 device to be able to use Dirext12 only upscalers. There is %10-15 performance penalty for this method but allows much more upscaler options. Also native DirectX11 implementation of FSR 2.2.1 is a backport from Unity renderer and has it's own problems which some of them avoided by OmniScaler.

#### For DirectX 12
* **XeSS 1.x.x** (Default upscaler)
* **FSR2 2.1.2** 
* **FSR2 2.2.1** 

#### For Vulkan
* **FSR2 2.1.2** (Default upscaler)
* **FSR2 2.2.1** 

## Installation
* Download the latest relase from releases.
* Extract the contents of the archive next to the game executable file in your games folder. [1]
* Run `EnableSignatureOverride.reg` and confirm merge. [2][3]
* DLSS option should be appeared/enabled in games settings. If it's not, you may try using [d3d12-proxy](https://github.com/cdozdil/d3d12-proxy/) for DirectX games, [vulkan-spoofer](https://github.com/cdozdil/vulkan-spoofer/) for Vulkan games and [nvapi-dummy](https://github.com/FakeMichau/nvapi-dummy) for spoofing NVAPI.

*[1] This package contains latest version of `libxess.dll` and if game folder contains any older version of same library it would be overwritten. Consider backing up or renaming existing file.*

*[2] Normally Streamline and games check if nvngx.dll is signed, by merging this `.reg` file we are overriding this signature check.*

*[3] Adding signature override on Linux - There are many possible setups, this one will focus on steam games:*
* *Make sure you have protontricks installed*
* *Run in a terminal protontricks <steam-appid> regedit, replace <steam-appid> with an id for your game*
* *Press "registry" in the top left of the new window -> `Import Registry File` -> navigate to and select `EnableSignatureOverride.reg`*
* *You should see a message saying that you successfully added the entries to the registry*

*If your game is not on Steam, it all boils down to opening regedit inside your game's prefix and importing the file.*

## Uninstallation
* Run `DisableSignatureOverride.reg` file 
* Delete `EnableSignatureOverride.reg`, `DisableSignatureOverride.reg`, `nvngx.dll`, `nvngx.ini` files
* If there were a `libxess.dll` file and you have backed it up delete the new file and restore the backed up file. If you have overwrote old file **DO NOT** delete `libxess.dll` file. If there were no `libxess.dll` file it's safe to delete.

## Known Issues
Please check [this](Issues.md) document for known issues and possible solutions for them.

## Compilation

### Requirements
* Visual Studio 2022

### Instructions
* Clone this repo with all of its submodules.
* Open the OmniScaler.sln with Visual Studio 2022.
* Build the project

## Thanks
* @PotatoOfDoom for CyberFSR2
* @Artur for DLSS Enabler and helping me to implement NVAPI correctly
* @LukeFZ & @Nukem for their great mods and sharing their knowledge 
* @FakeMichau for support, ideas and **OmniScaler** name 
* @QM for continous testing efforts and helping me to reach games
* @Cryio, @krispy, @krisshietala, @Lordubuntu, @scz, @Veeqo for their hard work on compatibility matrix
* @RazzerBrazzer and DLSS2FSR community for all their support
