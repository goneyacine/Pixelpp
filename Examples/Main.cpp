#include <iostream>
#include <cstdint>
#include "Pixelpp.h"


void Example1();
void Example2();
void Example3();
void Example4();

int main()
{
	int choice;
	std::cout << "choose between Example 1, 2, 3 & 4" << "\n";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		Example1();
		break;
	case 2:
		Example2();
		break;
	case 3:
		Example3();
		break;
	case 4:
		Example4();
		break;
	}

}

void Example1()
{
	std::cout << "Hello " << "\n";
	std::cout << "Choose the color depth you wanna work with " << "\n";
	std::cout << "Type 1 for 16 bit color channel, 2 for 8 & 3 for 4 : " << "\n";
	int choice;
	std::cin >> choice;
	std::cout << "Enter the rgba value :" << "\n";
	switch (choice)
	{
	case 1:
	{
		uint64_t rgba;
		std::cin >> rgba;
		std::cout << "(R: " << (int)Pixelpp::GetRed16(rgba);
		std::cout << ", G: " << (int)Pixelpp::GetGreen16(rgba);
		std::cout << ", B: " << (int)Pixelpp::GetBlue16(rgba);
		std::cout << ", A: " << (int)Pixelpp::GetAlpha16(rgba) << ")" << "\n";
	}
	break;
	case 2:
	{
		uint32_t rgba;
		std::cin >> rgba;
		std::cout << "(R: " << (int)Pixelpp::GetRed8(rgba);
		std::cout << ", G: " << (int)Pixelpp::GetGreen8(rgba);
		std::cout << ", B: " << (int)Pixelpp::GetBlue8(rgba);
		std::cout << ", A: " << (int)Pixelpp::GetAlpha8(rgba) << ")" << "\n";
	}
	break;
	case 3:
	{
		uint16_t rgba;

		std::cin >> rgba;
		std::cout << "(R: " << (int)Pixelpp::GetRed4(rgba);
		std::cout << ", G: " << (int)Pixelpp::GetGreen4(rgba);
		std::cout << ", B: " << (int)Pixelpp::GetBlue4(rgba);
		std::cout << ", A: " << (int)Pixelpp::GetAlpha4(rgba) << ")" << "\n";
	}
	break;
	}

	std::cout << "......DONE......";
}
void Example2()
{
	std::cout << "Hello" << "\n";
	std::cout << "Enter A 16 bit color channel rgba value : " << "\n";
	uint64_t rgba_64;
	std::cin >> rgba_64;
	std::cout << "Thanks for your input, now enter an 8 bit color channel rgba value : " << "\n";
	uint32_t rgba_32;
	std::cin >> rgba_32;
	std::cout << "Oh Thanks Again :), now enter a 4 bit color channel rgba value : " << "\n";
	uint16_t rgba_16;
	std::cin >> rgba_16;

	uint16_t* rgba16 = Pixelpp::GetRGBA16(rgba_64);
	uint8_t* rgba8 = Pixelpp::GetRGBA8(rgba_32);
	uint8_t* rgba4 = Pixelpp::GetRGBA8(rgba_16);

	uint16_t* rgb16 = Pixelpp::GetRGBA16(rgba_64);
	uint8_t* rgb8 = Pixelpp::GetRGBA8(rgba_32);
	uint8_t* rgb4 = Pixelpp::GetRGBA8(rgba_16);

	std::cout << "RGBA16 (" << (int)*rgba16 << ", " << (int)*(rgba16 + 1) << ", " << (int)*(rgba16 + 2) << ", " << (int)*(rgba16 + 3) << ")" << "\n";
	std::cout << "RGB16 (" << (int)*rgb16 << ", " << (int)*(rgb16 + 1) << ", " << (int)*(rgb16 + 2) << ")" << "\n";


	std::cout << "RGBA8 (" << (int)*rgba8 << ", " << (int)*(rgba8 + 1) << ", " << (int)*(rgba8 + 2) << ", " << (int)*(rgba8 + 3) << ")" << "\n";
	std::cout << "RGB8 (" << (int)*rgb8 << ", " << (int)*(rgb8 + 1) << ", " << (int)*(rgb8 + 2) << ")" << "\n";



	std::cout << "RGBA4 (" << (int)*rgba4 << ", " << (int)*(rgba4 + 1) << ", " << (int)*(rgba4 + 2) << ", " << (int)*(rgba4 + 3) << ")" << "\n";
	std::cout << "RGB4 (" << (int)*rgb4 << ", " << (int)*(rgb4 + 1) << ", " << (int)*(rgb4 + 2) << ")" << "\n";


	std::cout << "......DONE......";

}
void Example3()
{
	std::cout << "Hello" << "\n";
	std::cout << "Enter 1 for 16 bit color channel, 2 for 8,3 for 4 :" << "\n";
	int choice;
	std::cin >> choice;
	unsigned int r, g, b, a;
	std::cout << "Enter the red value : " << "\n";
	std::cin >> r;
	std::cout << "Enter the green value : " << "\n";
	std::cin >> g;
	std::cout << "Enter the blue value : " << "\n";
	std::cin >> b;
	std::cout << "Enter the alpha value" << "\n";
	std::cin >> a;
	switch (choice)
	{
	case 1:
	{
		uint64_t rgba;
		Pixelpp::SetRGBA16(&rgba, r, g, b, a);
		std::cout << "RGBA : " << rgba << "\n";
		std::cout << "(R: " << (int)Pixelpp::GetRed16(rgba);
		std::cout << ", G: " << (int)Pixelpp::GetGreen16(rgba);
		std::cout << ", B: " << (int)Pixelpp::GetBlue16(rgba);
		std::cout << ", A: " << (int)Pixelpp::GetAlpha16(rgba) << ")" << "\n";
	}
	break;
	case 2:
	{
		uint32_t rgba;
		Pixelpp::SetRGBA8(&rgba, r, g, b, a);
		std::cout << "RGBA : " << rgba << "\n";
		std::cout << "(R: " << (int)Pixelpp::GetRed8(rgba);
		std::cout << ", G: " << (int)Pixelpp::GetGreen8(rgba);
		std::cout << ", B: " << (int)Pixelpp::GetBlue8(rgba);
		std::cout << ", A: " << (int)Pixelpp::GetAlpha8(rgba) << ")" << "\n";
	}
	break;
	case 3:
	{
		uint16_t rgba;
		Pixelpp::SetRGBA4(&rgba, r, g, b, a);
		std::cout << "RGBA : " << rgba << "\n";
		std::cin >> rgba;
		std::cout << "(R: " << (int)Pixelpp::GetRed4(rgba);
		std::cout << ", G: " << (int)Pixelpp::GetGreen4(rgba);
		std::cout << ", B: " << (int)Pixelpp::GetBlue4(rgba);
		std::cout << ", A: " << (int)Pixelpp::GetAlpha4(rgba) << ")" << "\n";
	}
	break;

	}

	std::cout << "......DONE......";
}

void Example4()
{
	std::cout << "Hello" << "\n";
	std::cout << "Enter 1 for RGBA64_to_32, 2 for RGBA64_to_16, 3 for RGBA32_to_64, 4 for RGBA32_to16, 5 for RGBA16_to_64, 6 for RGBA_16_to_32";
	std::cout << "\n";
	int choice;
	std::cin >> choice; 
	switch (choice)
	{
	case 1:
	{
		std::cout << "Enter the rgba 64 value : ";
		uint64_t rgba;
		std::cin >> rgba;
		std::cout << "\n";
		std::cout << "RGBA_32 = " << Pixelpp::RGBA64_to_32(rgba) << "\n";
	}
	break;
	case 2:
	{
		std::cout << "Enter the rgba 64 value : ";
		uint64_t rgba;
		std::cin >> rgba;
		std::cout << "\n";
		std::cout << "RGBA_16 = " << Pixelpp::RGBA64_to_16(rgba) << "\n";
	}
	break;
	case 3:
	{
		std::cout << "Enter the rgba 32 value : ";
		uint32_t rgba;
		std::cin >> rgba;
		std::cout << "\n";
		std::cout << "RGBA_64 = " << Pixelpp::RGBA32_to_64(rgba) << "\n";
	}
	break;
	case 4:
	{
		std::cout << "Enter the rgba 32 value :";
		uint32_t rgba;
		std::cin >> rgba;
		std::cout << "\n";
		std::cout << "RGBA_16 = " << Pixelpp::RGBA32_to_16(rgba);
	}
	break;
	case 5:
	{
		std::cout << "Enter the rgba 16 value : ";
		uint16_t rgba;
		std::cin >> rgba;
		std::cout << "\n";
		std::cout << "RGBA_64 = " << Pixelpp::RGBA16_to_64(rgba) << "\n";
	}
	break;
	case 6:
	{
		std::cout << "Enter the rgba 16 value : ";
		uint16_t rgba;
		std::cin >> rgba;
		std::cout << "\n";
		std::cout << "RGBA_32 = " << Pixelpp::RGBA16_to_32(rgba) << "\n";
	}
	break;
	}

}
