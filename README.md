# Pixelpp
Pixelpp is a simple single header library writing in C++ to help developers when working with Colors and Images.

## Features 
- It has a support for 16 bit, 32 bit & 64 bit RGBA colors.
- Ability to cast colors.
- Ability to extract the Red, Green, Blue or Alpha values from an RGBA value.
- Ability to set the Red, Green, Blue & Alpha values.

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
[![Twitter URL](https://img.shields.io/twitter/url/https/twitter.com/Yacine_Betouche.svg?style=social&label=Follow%20%40Yacine_Betouche)](https://twitter.com/Yacine_Betouche)
