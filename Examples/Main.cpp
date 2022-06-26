#include <iostream>
#include <cstdint>
#include "Pixelpp.h"


void Example1();


int main()
{
 
	Example1();

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