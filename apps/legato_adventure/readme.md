---
parent: Example Applications
title: Legato Adventure
nav_order: 2
---

# Legato Adventure

![](./../../docs/html/legato_adventure.png)

This application demonstrates parallax and sprite animation capabilities using the graphics library. The application first launches a splash screen highlighting basic motion capability supported by the graphics library then transistions to the main screen.

When running the application, the user can interface with it via capacitive single-fingered touch and swiping gestures. The primary mode is presented in a mobile-game like style. In addition, two other features demonstrated by this application includes the circular gauge widget and the ability to display updating text at a high update rate (showing the score count). The lamb sprite character is animated by rapidly blitting frames of the animation character with slight position changes.

|MPLABX Configuration|Board Configuration|
|:-------------------|:------------------|
|[legato\_adv\_e70\_xu\_tm4301\_ssd1963.X](./firmware/legato_adv_e70_xu_tm4301b_ssd1963.X/readme.md)|SAM e70 Evaluation Kit using SSD1963 external graphics controller to drive the [High-Performance WQVGA Display Module with maXTouch® Technology](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/AC320005-4)|
|[legato\_adv\_e70\_xu\_tm5000\_ssd1963.X](./firmware/legato_adv_e70_xu_tm5000_ssd1963.X/readme.md)|SAM e70 Evaluation Kit using SSD1963 external graphics controller to drive the [High-Performance WVGA Display Module with maXTouch® Technology](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/AC320005-5)|