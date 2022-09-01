---
title: Release notes
nav_order: 99
---

# ![MPLAB® Harmony Graphics Suite](./docs/images/mhgs.png) Microchip MPLAB® Harmony 3 Graphics Application Examples for SAM E70/S70/V70/V71 Family
# Microchip MPLAB® Harmony 3 Release Notes

## MPLAB® Harmony 3 Graphics Application Examples for SAM E70/S70/V70/V71 Family v3.10.0

### Development kit and demo application support

Following table provides number of peripheral library examples available for different development kits.

| Development Kits  | MPLABx applications |
|:-----------------:|:-------------------:|
| [SAM E70 Xplained Ultra Evaluation Kit](https://www.microchip.com/Developmenttools/ProductDetails/DM320113)     | 10 |


## Release v3.10.0


### New Features


New features added in this release are as follows:

- Added MCC configurations to all applications


## Release v3.9.1


### New Features


New features added in this release are as follows:

- Added Legato Quickstart with SAM E70 LCC Global Palette 8-LUT WQVGA
- Added Legato Quickstart in 90-Orientation with SAM E70 LCC WQVGA


## Release v3.9.0


### New Features


New features added in this release are as follows:

- Applications migrated from gfx and gfx_apps repository to this new application repository for SAM E70/S70/V70/V71 development support
- Added legato_quickstart_e70_xu_tm4301b.IAR and legato_quickstart_e70_xu_tm4301b_ssd1963.IAR configurations


### Known Issues


The current known issues are as follows:

- For all IAR configurations, make sure LE_DYNAMIC_VTABLES is define to 1 to ensure build success
- Legato Flash: Visual artifact during data transfer when using SD EMMC card, without any impact to the transfer data
- Legato Flash: Requires MPLAB® XC32 C/C++ Compiler v3.01


### Development Tools


- [MPLAB® X IDE v6.00](https://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® X IDE plug-ins:
    - [MPLAB® Code Configurator (MCC) v5.1.9](https://github.com/Microchip-MPLAB-Harmony/mplabx-plugin)
    - [MPLAB® Harmony Configurator (MHC) v3.8.4 and above](https://github.com/Microchip-MPLAB-Harmony/mplabx-plugin)
- [MPLAB® XC32 C/C++ Compiler v4.10](https://www.microchip.com/mplab/compilers)

### Dependent Components

* [Harmony 3 GFX v3.11.1](https://github.com/Microchip-MPLAB-Harmony/gfx/releases/tag/v3.11.1)
* [Harmony 3 USB v3.10.0](https://github.com/Microchip-MPLAB-Harmony/usb/releases/tag/v3.10.0)
