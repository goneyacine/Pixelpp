#include <gtest/gtest.h>
#include "Pixelpp.h"
#include <time.h>
#include <cstdlib>

// the number of test iterations
#define CASE_NUM 100


/* TESTING THE GET RED FUNCTIONS */

TEST(GET_RED_16_TEST, CORRECT_RED_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t randomRedValue = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint64_t rgba = ((uint64_t)randomRedValue) << 48;
        ASSERT_EQ(randomRedValue, Pixelpp::GetRed16(rgba));
    }
}

TEST(GET_RED_8_TEST, CORRECT_RED_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomRedValue = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint32_t rgba = ((uint32_t)randomRedValue) << 24;
        ASSERT_EQ(randomRedValue, Pixelpp::GetRed8(rgba));
    }
}

TEST(GET_RED_4_TEST, CORRECT_RED_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomRedValue = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint16_t rgba = ((uint16_t)randomRedValue) << 12;
        ASSERT_EQ(randomRedValue, Pixelpp::GetRed4(rgba));
    }
}

/* TESTING THE GET GREEN FUNCTIONS */

TEST(GET_GREEN_16_TEST, CORRECT_GREEN_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t randomGreenValue = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint64_t rgba = ((uint64_t)randomGreenValue) << 32;
        ASSERT_EQ(randomGreenValue, Pixelpp::GetGreen16(rgba));
    }
}

TEST(GET_GREEN_8_TEST, CORRECT_GREEN_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomGreenValue = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint32_t rgba = ((uint32_t)randomGreenValue) << 16;
        ASSERT_EQ(randomGreenValue, Pixelpp::GetGreen8(rgba));
    }
}

TEST(GET_GREEN_4_TEST, CORRECT_GREEN_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomGreenValue = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint16_t rgba = ((uint16_t)randomGreenValue) << 8;
        ASSERT_EQ(randomGreenValue, Pixelpp::GetGreen4(rgba));
    }
}

/* TESTING THE GET BLUE FUNCTIONS */

TEST(GET_BLUE_16_TEST, CORRECT_BLUE_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t randomBlueValue = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint64_t rgba = ((uint64_t)randomBlueValue) << 16;
        ASSERT_EQ(randomBlueValue, Pixelpp::GetBlue16(rgba));
    }
}

TEST(GET_BLUE_8_TEST, CORRECT_BLUE_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomBlueValue = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint32_t rgba = ((uint32_t)randomBlueValue) << 8;
        ASSERT_EQ(randomBlueValue, Pixelpp::GetBlue8(rgba));
    }
}

TEST(GET_BLUE_4_TEST, CORRECT_BLUE_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomBlueValue = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint16_t rgba = ((uint16_t)randomBlueValue) << 4;
        ASSERT_EQ(randomBlueValue, Pixelpp::GetBlue4(rgba));
    }
}


/* TESTING THE GET ALPHA FUNCTIONS */

TEST(GET_ALPHA_16_TEST, CORRECT_ALPHA_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t randomAlphaValue = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint64_t rgba = ((uint64_t)randomAlphaValue);
        ASSERT_EQ(randomAlphaValue, Pixelpp::GetAlpha16(rgba));
    }
}

TEST(GET_ALPHA_8_TEST, CORRECT_ALPHA_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomAlphaValue = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint32_t rgba = ((uint32_t)randomAlphaValue);
        ASSERT_EQ(randomAlphaValue, Pixelpp::GetAlpha8(rgba));
    }
}

TEST(GET_ALPHA_4_TEST, CORRECT_ALPHA_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomAlphaValue = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint16_t rgba = ((uint16_t)randomAlphaValue);
        ASSERT_EQ(randomAlphaValue, Pixelpp::GetAlpha4(rgba));
    }
}

/* TESTING THE GET RGB FUNCTIONS */
 
TEST(GET_RGB_16_TEST, CORRECT_RGB_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t r = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint16_t g = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint16_t b = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint64_t rgba = ((uint64_t)r) << 48;
        rgba = rgba  | (((uint64_t)g) << 32);
        rgba = rgba  | (((uint64_t)b) << 16);
        ASSERT_EQ(r, Pixelpp::GetRGB16(rgba)[0]);
        ASSERT_EQ(g, Pixelpp::GetRGB16(rgba)[1]);
        ASSERT_EQ(b, Pixelpp::GetRGB16(rgba)[2]);
    }
}

TEST(GET_RGB_8_TEST, CORRECT_RGB_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t r = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint8_t g = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint8_t b = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint32_t rgba = ((uint32_t)r) << 24;
        rgba = rgba | (((uint32_t)g) << 16);
        rgba = rgba | (((uint32_t)b) << 8);
        ASSERT_EQ(r, Pixelpp::GetRGB8(rgba)[0]);
        ASSERT_EQ(g, Pixelpp::GetRGB8(rgba)[1]);
        ASSERT_EQ(b, Pixelpp::GetRGB8(rgba)[2]);
    }
}


TEST(GET_RGB_4_TEST, CORRECT_RGB_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t r = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint8_t g = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint8_t b = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint16_t rgba = ((uint16_t)r) << 12;
        rgba = rgba | (((uint16_t)g) << 8);
        rgba = rgba | (((uint16_t)b) << 4);
        ASSERT_EQ(r, Pixelpp::GetRGB4(rgba)[0]);
        ASSERT_EQ(g, Pixelpp::GetRGB4(rgba)[1]);
        ASSERT_EQ(b, Pixelpp::GetRGB4(rgba)[2]);
    }
}


/* TESTING THE GET RGBA FUNCTIONS */

TEST(GET_RGBA_16_TEST, CORRECT_RGBA_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t r = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint16_t g = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint16_t b = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint16_t a = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint64_t rgba = ((uint64_t)r) << 48;
        rgba = rgba | (((uint64_t)g) << 32);
        rgba = rgba | (((uint64_t)b) << 16);
        rgba = rgba | ((uint64_t)a);
        ASSERT_EQ(r, Pixelpp::GetRGBA16(rgba)[0]);
        ASSERT_EQ(g, Pixelpp::GetRGBA16(rgba)[1]);
        ASSERT_EQ(b, Pixelpp::GetRGBA16(rgba)[2]);
        ASSERT_EQ(a, Pixelpp::GetRGBA16(rgba)[3]);
    }
}

TEST(GET_RGBA_8_TEST, CORRECT_RGBA_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t r = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint8_t g = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint8_t b = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint8_t a = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint32_t rgba = ((uint32_t)r) << 24;
        rgba = rgba | (((uint32_t)g) << 16);
        rgba = rgba | (((uint32_t)b) << 8);
        rgba = rgba | ((uint32_t)a);
        ASSERT_EQ(r, Pixelpp::GetRGBA8(rgba)[0]);
        ASSERT_EQ(g, Pixelpp::GetRGBA8(rgba)[1]);
        ASSERT_EQ(b, Pixelpp::GetRGBA8(rgba)[2]);
        ASSERT_EQ(a, Pixelpp::GetRGBA8(rgba)[3]);
    }
}


TEST(GET_RGBA_4_TEST, CORRECT_RGBA_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t r = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint8_t g = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint8_t b = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint8_t a = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint16_t rgba = ((uint16_t)r) << 12;
        rgba = rgba | (((uint16_t)g) << 8);
        rgba = rgba | (((uint16_t)b) << 4);
        rgba = rgba | ((uint16_t)a);
        ASSERT_EQ(r, Pixelpp::GetRGBA4(rgba)[0]);
        ASSERT_EQ(g, Pixelpp::GetRGBA4(rgba)[1]);
        ASSERT_EQ(b, Pixelpp::GetRGBA4(rgba)[2]);
        ASSERT_EQ(a, Pixelpp::GetRGBA4(rgba)[3]);
    }
}

/* TESTING THE SET RED FUNCTIONS */

TEST(SET_RED_16_TEST, CORRETCLY_SETTING_THE_RED_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint64_t rgba;
        uint16_t red = (uint16_t)(rand()/RAND_MAX) * 0xFFFF;
        Pixelpp::SetRed16(&rgba, red);
        ASSERT_EQ(red, Pixelpp::GetRed16(rgba));
    }
}

TEST(SET_RED_8_TEST, CORRETCLY_SETTING_THE_RED_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint32_t rgba;
        uint8_t red = (uint8_t)(rand()/RAND_MAX) * 0xFF;
        Pixelpp::SetRed8(&rgba, red);
        ASSERT_EQ(red, Pixelpp::GetRed8(rgba));
    }
}

TEST(SET_RED_4_TEST, CORRETCLY_SETTING_THE_RED_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t rgba;
        uint8_t red = (uint8_t)(rand()/RAND_MAX) * 0x0F;
        Pixelpp::SetRed4(&rgba, red);
        ASSERT_EQ(red, Pixelpp::GetRed4(rgba));
    }
}


/* TESTING THE SET GREEN FUNCTIONS */

TEST(SET_GREEN_16_TEST, CORRETCLY_SETTING_THE_GREEN_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint64_t rgba;
        uint16_t green = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        Pixelpp::SetGreen16(&rgba, green);
        ASSERT_EQ(green, Pixelpp::GetGreen16(rgba));
    }
}

TEST(SET_GREEN_8_TEST, CORRETCLY_SETTING_THE_GREEN_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint32_t rgba;
        uint8_t green = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        Pixelpp::SetGreen8(&rgba, green);
        ASSERT_EQ(green, Pixelpp::GetGreen8(rgba));
    }
}

TEST(SET_GREEN_4_TEST, CORRETCLY_SETTING_THE_GREEN_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t rgba;
        uint8_t green = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        Pixelpp::SetGreen4(&rgba, green);
        ASSERT_EQ(green, Pixelpp::GetGreen4(rgba));
    }
}

/* TESTING THE SET BLUE FUNCTIONS */

TEST(SET_BLUE_16_TEST, CORRETCLY_SETTING_THE_BLUE_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint64_t rgba;
        uint16_t blue = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        Pixelpp::SetBlue16(&rgba, blue);
        ASSERT_EQ(blue, Pixelpp::GetBlue16(rgba));
    }
}

TEST(SET_BLUE_8_TEST, CORRETCLY_SETTING_THE_BLUE_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint32_t rgba;
        uint8_t blue = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        Pixelpp::SetBlue8(&rgba, blue);
        ASSERT_EQ(blue, Pixelpp::GetBlue8(rgba));
    }
}

TEST(SET_BLUE_4_TEST, CORRETCLY_SETTING_THE_BLUE_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t rgba;
        uint8_t blue = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        Pixelpp::SetBlue4(&rgba, blue);
        ASSERT_EQ(blue, Pixelpp::GetBlue4(rgba));
    }
}

/* TESTING THE SET ALPHA FUNCTIONS */

TEST(SET_ALPHA_16_TEST, CORRETCLY_SETTING_THE_ALPHA_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint64_t rgba;
        uint16_t alpha = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        Pixelpp::SetAlpha16(&rgba, alpha);
        ASSERT_EQ(alpha, Pixelpp::GetAlpha16(rgba));
    }
}

TEST(SET_ALPHA_8_TEST, CORRETCLY_SETTING_THE_ALPHA_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint32_t rgba;
        uint8_t alpha = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        Pixelpp::SetAlpha8(&rgba, alpha);
        ASSERT_EQ(alpha, Pixelpp::GetAlpha8(rgba));
    }
}

TEST(SET_ALPHA_4_TEST, CORRETCLY_SETTING_THE_ALPHA_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t rgba;
        uint8_t alpha = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        Pixelpp::SetAlpha4(&rgba, alpha);
        ASSERT_EQ(alpha, Pixelpp::GetAlpha4(rgba));
    }
}


/* TESTING THE SET RGB FUNCTIONS */

TEST(SET_RGB_16_TEST, CORRETCLY_SETTING_THE_RGB_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint64_t rgba;
        uint16_t r = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint16_t g = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint16_t b = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        Pixelpp::SetRed16(&rgba, r);
        Pixelpp::SetGreen16(&rgba, g);
        Pixelpp::SetBlue16(&rgba, b);
        ASSERT_EQ(r, Pixelpp::GetRed16(rgba));
        ASSERT_EQ(g, Pixelpp::GetGreen16(rgba));
        ASSERT_EQ(b, Pixelpp::GetBlue16(rgba));
    }
}

TEST(SET_RGB_8_TEST, CORRETCLY_SETTING_THE_RGB_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint32_t rgba;
        uint8_t r = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint8_t g = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint8_t b = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        Pixelpp::SetRed8(&rgba, r);
        Pixelpp::SetGreen8(&rgba, g);
        Pixelpp::SetBlue8(&rgba, b);
        ASSERT_EQ(r, Pixelpp::GetRed8(rgba));
        ASSERT_EQ(g, Pixelpp::GetGreen8(rgba));
        ASSERT_EQ(b, Pixelpp::GetBlue8(rgba));
    }
}

TEST(SET_RGB_4_TEST, CORRETCLY_SETTING_THE_RGB_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t rgba;
        uint8_t r = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint8_t g = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint8_t b = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        Pixelpp::SetRed4(&rgba, r);
        Pixelpp::SetGreen4(&rgba, g);
        Pixelpp::SetBlue4(&rgba, b);
        ASSERT_EQ(r, Pixelpp::GetRed4(rgba));
        ASSERT_EQ(g, Pixelpp::GetGreen4(rgba));
        ASSERT_EQ(b, Pixelpp::GetBlue4(rgba));
    }
}

/* TESTING THE SET RGBA FUNCTIONS */

TEST(SET_RGBA_16_TEST, CORRETCLY_SETTING_THE_RGBA_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint64_t rgba;
        uint16_t r = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint16_t g = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint16_t b = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint16_t a = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        Pixelpp::SetRed16(&rgba, r);
        Pixelpp::SetGreen16(&rgba, g);
        Pixelpp::SetBlue16(&rgba, b);
        Pixelpp::SetAlpha16(&rgba, a);
        ASSERT_EQ(r, Pixelpp::GetRed16(rgba));
        ASSERT_EQ(g, Pixelpp::GetGreen16(rgba));
        ASSERT_EQ(b, Pixelpp::GetBlue16(rgba));
        ASSERT_EQ(a, Pixelpp::GetAlpha16(rgba));
    }
}

TEST(SET_RGBA_8_TEST, CORRETCLY_SETTING_THE_RGBA_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint32_t rgba;
        uint8_t r = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint8_t g = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint8_t b = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint8_t a = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        Pixelpp::SetRed8(&rgba, r);
        Pixelpp::SetGreen8(&rgba, g);
        Pixelpp::SetBlue8(&rgba, b);
        Pixelpp::SetAlpha8(&rgba, a);
        ASSERT_EQ(r, Pixelpp::GetRed8(rgba));
        ASSERT_EQ(g, Pixelpp::GetGreen8(rgba));
        ASSERT_EQ(b, Pixelpp::GetBlue8(rgba));
        ASSERT_EQ(a, Pixelpp::GetAlpha8(rgba));
    }
}

TEST(SET_RGBA_4_TEST, CORRETCLY_SETTING_THE_RGBA_VALUE)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t rgba;
        uint8_t r = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint8_t g = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint8_t b = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint8_t a = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        Pixelpp::SetRed4(&rgba, r);
        Pixelpp::SetGreen4(&rgba, g);
        Pixelpp::SetBlue4(&rgba, b);
        Pixelpp::SetAlpha4(&rgba, a);
        ASSERT_EQ(r, Pixelpp::GetRed4(rgba));
        ASSERT_EQ(g, Pixelpp::GetGreen4(rgba));
        ASSERT_EQ(b, Pixelpp::GetBlue4(rgba));
        ASSERT_EQ(a, Pixelpp::GetAlpha4(rgba));
    }
}


int main(int argc, char* argv[])
{
    srand(time(0));

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}