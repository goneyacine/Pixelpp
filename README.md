# Pixelpp
Pixelpp is a simple single header library writing in C++ to help developers when working with Colors and Images.
With Pixelpp, developers can effortlessly change the colors of images and fine-tune various color-related parameters, 
making it an invaluable tool for image processing tasks.
# Table of contents
 - Features
 - How to Download
 - How to use Pixelpp
 - Example
 - Social Media


## Features 
- Pixelpp is compatiable and supported though various platforms
- It has a support for 16 bit, 32 bit & 64 bit RGBA colors.
- Ability to cast colors.
- Ability to extract the Red, Green, Blue or Alpha values from an RGBA value.
- Ability to set the Red, Green, Blue & Alpha values.

## How to Download
- To download, simply download the github repository or clone it into your own repository.
- Place header and cpp file into the project you are working on
- Include the header file in your include statements on the file you use to call it

## How to use Pixelpp
After including the header file, the user can declare integer values to store rgb color values.
There are multiple functions available for the convinience for the user
-Set color functions can change the color that can be changed according to byte size
-Get color returns the color values 
-RGBA from x bytes to y bytes function converts the bytes of the color from x to y




## Example 
```cpp

#include <iostream>
#include <cstdint>
#include "Pixelpp.h"

int main()
{
 //we store the RGBA (32 bit color) in 32 integer
 uint32_t rgba;
 
 // set the red, green, blue & alpha values
 Pixelpp::SetRGBA32(&rgba, 200, 100, 100, 50);
 
 //priting the RGBA values into the console
		std::cout << "RGBA32 (R: " << (int)Pixelpp::GetRed8(rgba);
		std::cout << ", G: " << (int)Pixelpp::GetGreen8(rgba);
		std::cout << ", B: " << (int)Pixelpp::GetBlue8(rgba);
		std::cout << ", A: " << (int)Pixelpp::GetAlpha8(rgba) << ")" << "\n";
}
```

## Social media 
If you have any questions, feel free to reach me at
[![Twitter URL](https://img.shields.io/twitter/url/https/twitter.com/Yacine_Betouche.svg?style=social&label=Follow%20%40Yacine_Betouche)](https://twitter.com/Yacine_Betouche)
