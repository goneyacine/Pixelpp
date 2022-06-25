#pragma once

#include <cstdint>

namespace Pixelpp
{

	/*-------------- 64 BIT COLOR (16 BIT CHANNELS) -------------- */

	/*
	* extracts the red value from 64 bit rgba color
	*/
	uint16_t GetRed16(uint64_t p_rgba);
	/*
	* extracts the green value from 64 bit rgba color
	*/
	uint16_t GetGreen16(uint64_t p_rgba);
	/*
	* extracts the blue value from 64 bit rgba color
	*/
	uint16_t GetBlue16(uint64_t p_rgba);
	/*
	* extracts the alpha value from 64 bit rgba color
	*/
	uint16_t GetAlpha16(uint64_t p_rgba);

	/*
	* extracts the red,green & blue from 64 bit rgba color and returns the result in an array
	*/
	uint16_t* GetRGB16(uint64_t p_rgba);


	/*
	* extracts the red, green, blue & alpha from 64 bit rgba color and returns the result in an array
	*/
	uint16_t* GetRGBA16(uint16_t p_rgba);


	/*-------------- 32 BIT COLOR (8 BIT CHANNELS) -------------- */

	/*
	* extracts the red value from 32 bit rgba color
	*/
	uint8_t GetRed8(uint32_t p_rgba);
	/*
	* extracts the green value from 32 bit rgba color
	*/
	uint8_t GetGreen8(uint32_t p_rgba);
	/*
	* extracts the blue value from 32 bit rgba color
	*/
	uint8_t GetBlue8(uint32_t p_rgba);
	/*
	* extracts the alpha value from 32 bit rgba color
	*/
	uint8_t GetAlpha8(uint32_t p_rgba);

	/*
	* extracts the red,green & blue from 32 bit rgba color and returns the result in an array
	*/
	uint8_t* GetRGB8(uint32_t p_rgba);


	/*
	* extracts the red, green, blue & alpha from 32 bit rgba color and returns the result in an array
	*/
	uint8_t* GetRGBA8(uint32_t p_rgba);

	/*-------------- 16 BIT COLOR (4 BIT CHANNELS) -------------- */
    
	/*
	* extracts the red value from 16 bit rgba color
	*/
	uint8_t GetRed8(uint16_t p_rgba);
	/*
	* extracts the green value from 16 bit rgba color
	*/
	uint8_t GetGreen8(uint16_t p_rgba);
	/*
	* extracts the blue value from 16 bit rgba color
	*/
	uint8_t GetBlue8(uint16_t p_rgba);
	/*
	* extracts the alpha value from 16 bit rgba color
	*/
	uint8_t GetAlpha8(uint16_t p_rgba);

	/*
	* extracts the red,green & blue from 16 bit rgba color and returns the result in an array
	*/
	uint8_t* GetRGB8(uint16_t p_rgba);


	/*
	* extracts the red, green, blue & alpha from 16 bit rgba color and returns the result in an array
	*/
	uint8_t* GetRGBA8(uint16_t p_rgba);
}