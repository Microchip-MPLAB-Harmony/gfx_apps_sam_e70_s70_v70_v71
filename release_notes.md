---
title: Release notes
nav_order: 99
---

# ![MPLAB® Harmony Graphics Suite](./docs/images/mhgs.png) Microchip MPLAB® Harmony 3 Graphics Application Examples for SAM E70/S70/V70/V71 Family
# Microchip MPLAB® Harmony 3 Release Notes

## MPLAB® Harmony 3 Graphics Application Examples for SAM E70/S70/V70/V71 Family v3.9.1

### Development kit and demo application support

Following table provides number of peripheral library examples available for different development kits.

| Development Kits  | MPLABx applications |
|:-----------------:|:-------------------:|
| [SAM E70 Xplained Ultra Evaluation Kit](https://www.microchip.com/Developmenttools/ProductDetails/DM320113)     | 12 |


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

- Legato Flash: Visual artifact during data transfer when using SD EMMC card, without any impact to the transfer data
- For all IAR configurations, make sure LE_DYNAMIC_VTABLES is define to 1 to ensure build success

### Development Tools

- [MPLAB® X IDE v5.45](https://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® X IDE plug-ins:
  - MPLAB® Harmony Configurator (MHC) v3.6.5
- [MPLAB® XC32 C/C++ Compiler v2.50](https://www.microchip.com/mplab/compilers)

### Dependent Components

* [Harmony 3 GFX v3.9.3](https://github.com/Microchip-MPLAB-Harmony/gfx/releases/tag/v3.9.3)
* [Harmony 3 USB v3.7.1](https://github.com/Microchip-MPLAB-Harmony/usb/releases/tag/v3.7.1)
