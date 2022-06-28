#pragma once

#include <cstdint>

namespace Pixelpp
{

	/*-------------- 64 BIT COLOR (16 BIT CHANNELS) -------------- */
	
	/*
	 extracts the red value from 64 bit rgba color (16 bit color channel)
	*/
	uint16_t GetRed16(uint64_t p_rgba);
	/*
	 extracts the green value from 64 bit rgba color (16 bit color channel)
	*/
	uint16_t GetGreen16(uint64_t p_rgba);
	/*
	 extracts the blue value from 64 bit rgba color (16 bit color channel)
	*/
	uint16_t GetBlue16(uint64_t p_rgba);
	/*
	 extracts the alpha value from 64 bit rgba color (16 bit color channel)
	*/
	uint16_t GetAlpha16(uint64_t p_rgba);

	/*
	 extracts the red,green & blue from 64 bit rgba color (16 bit color channel) and returns the result in an array 
	*/
	uint16_t* GetRGB16(uint64_t p_rgba);

	/*
	 extracts the red, green, blue & alpha from 64 bit rgba color (16 bit color channel) and returns the result in an array
	*/
	uint16_t* GetRGBA16(uint64_t p_rgba);

	/*
	 sets the red value of a 64 bit rgba color (16 bit color channel)
	*/
	void SetRed16(uint64_t* p_rgba,uint16_t p_red);
    /*
	* sets the green value of a 64 bit rgba color (16 bit color channel) 
	*/
	void SetGreen16(uint64_t* p_rgba,uint16_t p_green);
	/*
	  sets the blue value of a 64 bit rgba color (16 bit color channel)
	*/
	void SetBlue16(uint64_t* p_rgba,uint16_t p_blue);
	/*
	 sets the aplha value of a 64 bit rgba color (16 bit color channel)
	*/
	void SetAlpha16(uint64_t* p_rgba,uint16_t p_alpha);
	/*
	 sets the red, green & blue value of a 64 bit rgba color (16 bit color channel)
	*/
	void SetRGB16(uint64_t* p_rgba, uint16_t p_red, uint16_t p_green, uint16_t p_blue);
	/*
	 sets the red, green, blue & alpha value of a 64 bit rgba color (16 bit color channel)
	*/
	void SetRGBA16(uint64_t* p_rgba, uint16_t p_red, uint16_t p_green, uint16_t p_blue,uint16_t p_alpha);





	/*-------------- 32 BIT COLOR (8 BIT CHANNELS) -------------- */

	/*
	 extracts the red value from 32 bit rgba color (8 bit color channel)
	*/
	uint8_t GetRed8(uint32_t p_rgba);
	/*
	 extracts the green value from 32 bit rgba color (8 bit color channel)
	*/
	uint8_t GetGreen8(uint32_t p_rgba);
	/*
	 extracts the blue value from 32 bit rgba color (8 bit color channel)
	*/
	uint8_t GetBlue8(uint32_t p_rgba);
	/*
	 extracts the alpha value from 32 bit rgba color (8 bit color channel)
	*/
	uint8_t GetAlpha8(uint32_t p_rgba);

	/*
	 extracts the red,green & blue from 32 bit rgba color (8 bit color channel) and returns the result in an array
	*/
	uint8_t* GetRGB8(uint32_t p_rgba);


	/*
	 extracts the red, green, blue & alpha from 32 bit rgba color (8 bit color channel) and returns the result in an array
	*/
	uint8_t* GetRGBA8(uint32_t p_rgba);


	/*
	 sets the red value of a 32 bit rgba color (8 bit color channel)
	*/
	void SetRed8(uint32_t* p_rgba, uint8_t p_red);
	/*
	 sets the green value of a 32 bit rgba color (8 bit color channel)
	*/
	void SetGreen8(uint32_t* p_rgba, uint8_t p_green);
	/*
	 sets the blue value of a 32 bit rgba color (8 bit color channel)
	*/
	void SetBlue8(uint32_t* p_rgba, uint8_t p_blue);
	/*
	 sets the alpha value of a 32 bit rgba color (8 bit color channel)
	*/
	void SetAlpha8(uint32_t* p_rgba, uint8_t p_alpha);
	 /*
	  sets the red, green & blue values of a 32 bit rgba color (8 bit color channel)
	 */
	void SetRGB8(uint32_t* p_rgba, uint8_t p_red, uint8_t p_green, uint8_t p_blue);
	/*
	 sets the red, green, blue & alpha values of a 32 bit rgba color (8 bit color channel)
	*/
	void SetRGBA8(uint32_t* p_rgba, uint8_t p_red, uint8_t p_green, uint8_t p_blue, uint8_t p_alpha);




	/*-------------- 16 BIT COLOR (4 BIT CHANNELS) -------------- */
    
	/*
	* extracts the red value from 16 bit rgba color (4 bit color channel)
	*/
	uint8_t GetRed4(uint16_t p_rgba);
	/*
	* extracts the green value from 16 bit rgba color (4 bit color channel)
	*/
	uint8_t GetGreen4(uint16_t p_rgba);
	/*
	* extracts the blue value from 16 bit rgba color (4 bit color channel)
	*/
	uint8_t GetBlue4(uint16_t p_rgba);
	/*
	* extracts the alpha value from 16 bit rgba color (4 bit color channel)
	*/
	uint8_t GetAlpha4(uint16_t p_rgba);

	/*
	* extracts the red,green & blue from 16 bit rgba color (4 bit color channel) and returns the result in an array
	*/
	uint8_t* GetRGB4(uint16_t p_rgba);


	/*
	* extracts the red, green, blue & alpha from 16 bit rgba color (4 bit color channel) and returns the result in an array
	*/
	uint8_t* GetRGBA4(uint16_t p_rgba);

	/*
	* sets the red value of 16 bit rgba color (4 bit color channel)
	*/
	void SetRed4(uint16_t* p_rgba, uint8_t p_red);
	/*
	* sets the green value of 16 bit rgba color (4 bit color channel)
	*/
	void SetGreen4(uint16_t* p_rgba, uint8_t p_green);
	/*
	* sets the blue value of a 16 bit rgba color (4 bit color channel)
	*/
	void SetBlue4(uint16_t* p_rgba, uint8_t p_blue);

	/*
	* sets the alpha value of a 16 bit rgba color (4 color channel)
	*/
	void SetAlpha4(uint16_t* p_rgba, uint8_t p_alpha);

	/*
	* sets the red, green & blue values of a 16 bit rgba color (4 bit color channel)
	*/
	void SetRGB4(uint16_t* p_rgba, uint8_t p_red, uint8_t p_green, uint8_t p_blue); 
	/*
	* sets the red, green, blue & alpha values of a 16 bit rgba color (4 bit color channel)
	*/
	void SetRGBA4(uint16_t* p_rgba, uint8_t p_red, uint8_t p_green, uint8_t p_blue, uint8_t p_alpha);



	/*
	 casts 64 bit rgba color to 32 bit rgba 
	*/
	uint32_t RGBA64_to_32(uint64_t p_rgba64);

	/*
     casts 64 bit rgba color to 16 bit rgba	
	*/
	uint16_t RGBA64_to_16(uint64_t p_rgab64);

	/*
	casts 32 bit rgba color to 64 bit rgba 
	*/
	uint64_t RGBA32_to_64(uint32_t p_rgba32);

	/*
	casts 32 bit rgba color to 16 bit rgba
	*/
	uint16_t RGBA32_to_16(uint32_t p_rgba32);

	/*
	 casts 16 bit rgba color to 64 bit rgba
    */
	uint64_t RGBA16_to_64(uint16_t p_rgba16);

	/*
	 casts 16 bit rgba color to 32 bit rgba
	*/
	uint32_t RGBA16_to_32(uint16_t p_rgba16);
}