#include <cstdint>
#include "Pixelpp.h"

using namespace Pixelpp;


/*----------------- GET RED FUNCTIONS -----------------*/

uint16_t Pixelpp::GetRed16(uint64_t p_rgba)
{
	return (p_rgba & 0xFFFF000000000000) >> 48;
}

uint8_t Pixelpp::GetRed8(uint32_t p_rgba)
{
	return (p_rgba & 0xFF000000) >> 24;
}

uint8_t Pixelpp::GetRed4(uint16_t p_rgba)
{
	return (p_rgba & 0xF000) >> 12;
}

/*----------------- GET GREEN FUNCTIONS -----------------*/

uint16_t Pixelpp::GetGreen16(uint64_t p_rgba)
{
	return ((p_rgba << 16) & 0xFFFF000000000000) >> 48;
}

uint8_t Pixelpp::GetGreen8(uint32_t p_rgba)
{
	return ((p_rgba << 8) & 0xFF000000) >> 24;
}

uint8_t Pixelpp::GetGreen4(uint16_t p_rgba)
{
	return ((p_rgba << 4) & 0xF000) >> 12;
}


/*----------------- GET BLUE FUNCTIONS -----------------*/

uint16_t Pixelpp::GetBlue16(uint64_t p_rgba)
{
	return ((p_rgba << 32) & 0xFFFF000000000000) >> 48;
}


uint8_t Pixelpp::GetBlue8(uint32_t p_rgba)
{
	return ((p_rgba << 16) & 0xFF000000) >> 24;
}

uint8_t Pixelpp::GetBlue4(uint16_t p_rgba)
{
	return ((p_rgba << 8) & 0xF000) >> 12;
}

/*----------------- GET ALPHA FUNCTIONS -----------------*/

uint16_t Pixelpp::GetAlpha16(uint64_t p_rgba)
{
	return ((p_rgba << 48) & 0xFFFF000000000000) >> 48;
}

uint8_t Pixelpp::GetAlpha8(uint32_t p_rgba)
{
	return ((p_rgba << 24) & 0xFF000000) >> 24;
}

uint8_t Pixelpp::GetAlpha4(uint16_t p_rgba)
{
	return ((p_rgba << 12) & 0xF000) >> 12;
}


/*----------------- GET RGB FUNCTIONS -----------------*/

uint16_t* Pixelpp::GetRGB16(uint64_t p_rgba)
{
	uint16_t* rgb = new uint16_t[3];
	rgb[0] = GetRed16(p_rgba);
	rgb[1] = GetGreen16(p_rgba);
	rgb[2] = GetBlue16(p_rgba);
	return rgb;
}

uint8_t* Pixelpp::GetRGB8(uint32_t p_rgba)
{
	uint8_t* rgb = new uint8_t[3];
	rgb[0] = GetRed8(p_rgba);
	rgb[1] = GetGreen8(p_rgba);
	rgb[2] = GetBlue8(p_rgba);
	return rgb;
}

uint8_t* Pixelpp::GetRGB4(uint16_t p_rgba)
{
	uint8_t* rgb = new uint8_t[3];
	rgb[0] = GetRed4(p_rgba);
	rgb[1] = GetGreen4(p_rgba);
	rgb[2] = GetBlue4(p_rgba);
	return rgb;
}

/*----------------- GET RGBA FUNCTIONS -----------------*/

uint16_t* Pixelpp::GetRGBA16(uint64_t p_rgba)
{
	uint16_t* rgba = new uint16_t[4];
	rgba[0] = GetRed16(p_rgba);
	rgba[1] = GetGreen16(p_rgba);
	rgba[2] = GetBlue16(p_rgba);
	rgba[3] = GetAlpha16(p_rgba);
	return rgba;
}

uint8_t* Pixelpp::GetRGBA8(uint32_t p_rgba)
{
	uint8_t* rgba = new uint8_t[4];
	rgba[0] = GetRed8(p_rgba);
	rgba[1] = GetGreen8(p_rgba);
	rgba[2] = GetBlue8(p_rgba);
	rgba[3] = GetAlpha8(p_rgba);
	return rgba;
}

uint8_t* Pixelpp::GetRGBA4(uint16_t p_rgba)
{
	uint8_t* rgba = new uint8_t[4];
	rgba[0] = GetRed4(p_rgba);
	rgba[1] = GetGreen4(p_rgba);
	rgba[2] = GetBlue4(p_rgba);
	rgba[3] = GetAlpha4(p_rgba);
	return rgba;
}

/*----------------- SET RED FUNCTIONS -----------------*/

void Pixelpp::SetRed16(uint64_t* p_rgba, uint16_t p_red)
{

}
void Pixelpp::SetRed8(uint32_t* p_rgba, uint8_t p_red)
{

}

void Pixelpp::SetRed4(uint16_t* p_rgba, uint8_t p_red)
{

}

/*----------------- SET GREEN FUNCTIONS -----------------*/

void Pixelpp::SetGreen16(uint64_t* p_rgba, uint16_t p_green)
{

}

void Pixelpp::SetGreen8(uint32_t* p_rgba, uint8_t p_green)
{

}

void Pixelpp::SetGreen4(uint16_t* p_rgba, uint8_t p_green)
{

}

/*----------------- SET BLUE FUNCTIONS -----------------*/

void Pixelpp::SetBlue16(uint64_t* p_rgba, uint16_t p_blue)
{

}

void Pixelpp::SetBlue8(uint32_t* p_rgba, uint8_t p_blue)
{

}
 
void Pixelpp::SetBlue4(uint16_t* p_rgba, uint8_t p_blue)
{

}

/*----------------- SET ALPHA FUNCTIONS -----------------*/

void Pixelpp::SetAlpha16(uint64_t* p_rgba, uint16_t p_alpha)
{

}

void Pixelpp::SetAlpha8(uint32_t* p_rgba, uint8_t p_alpha)
{

}

void Pixelpp::SetAlpha4(uint16_t* p_rgba, uint8_t p_alpha)
{


}

/*----------------- SET RGB FUNCTIONS -----------------*/

void Pixelpp::SetRGB16(uint64_t* p_rgba, uint16_t p_red, uint16_t p_green, uint16_t p_blue)
{

}

void Pixelpp::SetRGB8(uint32_t* p_rgba, uint8_t p_red, uint8_t p_green, uint8_t p_blue)
{

}

void Pixelpp::SetRGB4(uint16_t* p_rgba, uint8_t p_red, uint8_t p_green, uint8_t p_blue)
{

}

/*----------------- SET RGBA FUNCTIONS -----------------*/

void Pixelpp::SetRGBA16(uint64_t* p_rgba, uint16_t p_red, uint16_t p_green, uint16_t p_blue, uint16_t p_alpha)
{

}

void Pixelpp::SetRGBA8(uint32_t* p_rgba, uint8_t p_red, uint8_t p_green, uint8_t p_blue, uint8_t p_alpha)
{


}

void Pixelpp::SetRGBA4(uint16_t* p_rgba, uint8_t p_red, uint8_t p_green, uint8_t p_blue, uint8_t p_alpha)
{

}




