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
	*p_rgba = (*p_rgba) & 0x0000FFFFFFFFFFFF;
	*p_rgba = (*p_rgba) | (((uint64_t)p_red) << 48);
}
void Pixelpp::SetRed8(uint32_t* p_rgba, uint8_t p_red)
{
	*p_rgba = (*p_rgba) & 0x00FFFFFF;
	*p_rgba = (*p_rgba) | (((uint32_t)p_red) << 24);
}

void Pixelpp::SetRed4(uint16_t* p_rgba, uint8_t p_red)
{
	*p_rgba = (*p_rgba) & 0x0FFF;
	*p_rgba = (*p_rgba) | (((uint16_t)p_red) << 12);
}

/*----------------- SET GREEN FUNCTIONS -----------------*/

void Pixelpp::SetGreen16(uint64_t* p_rgba, uint16_t p_green)
{
	*p_rgba = (*p_rgba) & 0xFFFF0000FFFFFFFF;
	*p_rgba = (*p_rgba) | (((uint64_t)p_green) << 32);
}

void Pixelpp::SetGreen8(uint32_t* p_rgba, uint8_t p_green)
{
	*p_rgba = (*p_rgba) & 0xFF00FFFF;
	*p_rgba = (*p_rgba) | (((uint32_t)p_green) << 16);
}

void Pixelpp::SetGreen4(uint16_t* p_rgba, uint8_t p_green)
{
	*p_rgba = (*p_rgba) & 0xF0FF;
	*p_rgba = (*p_rgba) | (((uint16_t)p_green) << 8);
}

/*----------------- SET BLUE FUNCTIONS -----------------*/

void Pixelpp::SetBlue16(uint64_t* p_rgba, uint16_t p_blue)
{
	*p_rgba = (*p_rgba) & 0xFFFFFFFF0000FFFF;
	*p_rgba = (*p_rgba) | (((uint64_t)p_blue) << 16);
}

void Pixelpp::SetBlue8(uint32_t* p_rgba, uint8_t p_blue)
{
	*p_rgba = (*p_rgba) & 0xFFFF00FF;
	*p_rgba = (*p_rgba) | (((uint32_t)p_blue) << 8);
}
 
void Pixelpp::SetBlue4(uint16_t* p_rgba, uint8_t p_blue)
{
	*p_rgba = (*p_rgba) & 0xFF0F;
	*p_rgba = (*p_rgba) | (((uint16_t)p_blue) << 4);
}

/*----------------- SET ALPHA FUNCTIONS -----------------*/

void Pixelpp::SetAlpha16(uint64_t* p_rgba, uint16_t p_alpha)
{
	*p_rgba = (*p_rgba) & 0xFFFFFFFFFFFF0000;
	*p_rgba = (*p_rgba) | ((uint64_t)p_alpha);
}

void Pixelpp::SetAlpha8(uint32_t* p_rgba, uint8_t p_alpha)
{
	*p_rgba = (*p_rgba) & 0xFFFFFF00;
	*p_rgba = (*p_rgba) | ((uint32_t)p_alpha);
}

void Pixelpp::SetAlpha4(uint16_t* p_rgba, uint8_t p_alpha)
{
	*p_rgba = (*p_rgba) & 0xFFF0;
	*p_rgba = (*p_rgba) | ((uint16_t)p_alpha);

}

/*----------------- SET RGB FUNCTIONS -----------------*/

void Pixelpp::SetRGB16(uint64_t* p_rgba, uint16_t p_red, uint16_t p_green, uint16_t p_blue)
{
	*p_rgba = 0x0000000000000000;
	*p_rgba = ((uint64_t)p_red) << 48;
	*p_rgba = (*p_rgba) | (((uint64_t)p_green) << 32);
	*p_rgba = (*p_rgba) | (((uint64_t)p_blue) << 16);
}

void Pixelpp::SetRGB8(uint32_t* p_rgba, uint8_t p_red, uint8_t p_green, uint8_t p_blue)
{
	*p_rgba = 0x00000000;
	*p_rgba = ((uint32_t)p_red) << 24;
	*p_rgba = (*p_rgba) | (((uint32_t)p_green) << 16);
	*p_rgba = (*p_rgba) | (((uint32_t)p_blue) << 8);
}

void Pixelpp::SetRGB4(uint16_t* p_rgba, uint8_t p_red, uint8_t p_green, uint8_t p_blue)
{
	*p_rgba = 0x0000;
	*p_rgba = ((uint16_t)p_red) << 12;
	*p_rgba = (*p_rgba) | (((uint16_t)p_green) << 8);
	*p_rgba = (*p_rgba) | (((uint16_t)p_blue) << 4);
}

/*----------------- SET RGBA FUNCTIONS -----------------*/

void Pixelpp::SetRGBA16(uint64_t* p_rgba, uint16_t p_red, uint16_t p_green, uint16_t p_blue, uint16_t p_alpha)
{
	*p_rgba = 0x0000000000000000;
	*p_rgba = ((uint64_t)p_red) << 48;
	*p_rgba = (*p_rgba) | (((uint64_t)p_green) << 32);
	*p_rgba = (*p_rgba) | (((uint64_t)p_blue) << 16);
	*p_rgba = (*p_rgba) | ((uint64_t)p_alpha);
}

void Pixelpp::SetRGBA8(uint32_t* p_rgba, uint8_t p_red, uint8_t p_green, uint8_t p_blue, uint8_t p_alpha)
{
	*p_rgba = 0x00000000;
	*p_rgba = ((uint32_t)p_red) << 24;
	*p_rgba = (*p_rgba) | (((uint32_t)p_green) << 16);
	*p_rgba = (*p_rgba) | (((uint32_t)p_blue) << 8);
	*p_rgba = (*p_rgba) | ((uint32_t)p_alpha);
}

void Pixelpp::SetRGBA4(uint16_t* p_rgba, uint8_t p_red, uint8_t p_green, uint8_t p_blue, uint8_t p_alpha)
{
	*p_rgba = 0x0000;
	*p_rgba = ((uint16_t)p_red) << 12;
	*p_rgba = (*p_rgba) | (((uint16_t)p_green) << 8);
	*p_rgba = (*p_rgba) | (((uint16_t)p_blue) << 4);
	*p_rgba = (*p_rgba) | ((uint16_t)p_alpha);
}

uint32_t Pixelpp::RGBA64_to_32(uint64_t p_rgba64)
{
	uint32_t rgba32;
	Pixelpp::SetRGBA8(&rgba32, (uint8_t)((float)Pixelpp::GetRed16(p_rgba64) / 0xFFFF * 0xFF),
		(uint8_t)((float)Pixelpp::GetGreen16(p_rgba64) / 0xFFFF * 0xFF), (uint8_t)((float)Pixelpp::GetBlue16(p_rgba64) / 0xFFFF * 0xFF),
		(uint8_t)((float)Pixelpp::GetAlpha16(p_rgba64) / 0xFFFF * 0xFF));
	return rgba32;
}

uint16_t Pixelpp::RGBA64_to_16(uint64_t p_rgba64)
{
	uint16_t rgba16;
	Pixelpp::SetRGBA4(&rgba16, (uint8_t)((float)Pixelpp::GetRed16(p_rgba64) / 0xFFFF * 0x0F),
		(uint8_t)((float)Pixelpp::GetGreen16(p_rgba64) / 0xFFFF * 0x0F), (uint8_t)((float)Pixelpp::GetBlue16(p_rgba64) / 0xFFFF * 0x0F),
		(uint8_t)((float)Pixelpp::GetAlpha16(p_rgba64) / 0xFFFF * 0x0F));
	return rgba16;
}


uint64_t Pixelpp::RGBA32_to_64(uint32_t p_rgba32)
{
	uint64_t rgba64;
	Pixelpp::SetRGBA16(&rgba64, (uint16_t)((float)Pixelpp::GetRed8(p_rgba32) / 0xFF * 0xFFFF),
		(uint16_t)((float)Pixelpp::GetGreen8(p_rgba32) / 0xFF * 0xFFFF), (uint16_t)((float)Pixelpp::GetBlue8(p_rgba32) / 0xFF * 0xFFFF),
		(uint16_t)((float)Pixelpp::GetAlpha8(p_rgba32) / 0xFF * 0xFFFF));
	return rgba64;
}

uint16_t Pixelpp::RGBA32_to_16(uint32_t p_rgba32)
{
	uint16_t rgba16;
	Pixelpp::SetRGBA4(&rgba16, (uint8_t)((float)Pixelpp::GetRed8(p_rgba32) / 0xFF * 0x0F),
		(uint8_t)((float)Pixelpp::GetGreen8(p_rgba32) / 0xFF * 0x0F), (uint8_t)((float)Pixelpp::GetBlue8(p_rgba32) / 0xFF * 0x0F),
		(uint8_t)((float)Pixelpp::GetAlpha8(p_rgba32) / 0xFF * 0x0F));
	return rgba16;
}

uint64_t Pixelpp::RGBA16_to_64(uint16_t p_rgba16)
{
	uint64_t rgba64;
	Pixelpp::SetRGBA16(&rgba64, (uint16_t)((float)Pixelpp::GetRed4(p_rgba16) / 0x0F * 0xFFFF),
		(uint16_t)((float)Pixelpp::GetGreen4(p_rgba16) / 0x0F * 0xFFFF), (uint16_t)((float)Pixelpp::GetBlue4(p_rgba16) / 0x0F * 0xFFFF),
		(uint16_t)((float)Pixelpp::GetAlpha4(p_rgba16) / 0x0F * 0xFFFF));
	return rgba64;
}

uint32_t Pixelpp::RGBA16_to_32(uint16_t p_rgba16)
{
	uint32_t rgba32;
	Pixelpp::SetRGBA8(&rgba32, (uint8_t)((float)Pixelpp::GetRed4(p_rgba16) / 0x0F * 0xFF),
		(uint8_t)((float)Pixelpp::GetGreen4(p_rgba16) / 0x0F * 0xFF), (uint8_t)((float)Pixelpp::GetBlue4(p_rgba16) / 0x0F * 0xFF),
		(uint8_t)((float)Pixelpp::GetAlpha4(p_rgba16) / 0x0F * 0xFF));
	return rgba32;
}




