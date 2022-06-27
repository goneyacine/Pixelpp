#include <gtest/gtest.h>
#include "Pixelpp.h"
#include <time.h>
#include <cstdlib>

#define CASE_NUM 10000


/* TESTING THE GET RED FUNCTIONS */

TEST(GetRed16Test, CorrectRedValueTest)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t randomRedValue = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint64_t rgba = ((uint64_t)randomRedValue) << 48;
        ASSERT_EQ(randomRedValue, Pixelpp::GetRed16(rgba));
    }
}

TEST(GetRed8Test, CorrectRedValueTest)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomRedValue = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint32_t rgba = ((uint32_t)randomRedValue) << 24;
        ASSERT_EQ(randomRedValue, Pixelpp::GetRed8(rgba));
    }
}

TEST(GetRed4Test, CorrectRedValueTest)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomRedValue = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint16_t rgba = ((uint16_t)randomRedValue) << 12;
        ASSERT_EQ(randomRedValue, Pixelpp::GetRed4(rgba));
    }
}

/* TESTING THE GET GREEN FUNCTIONS */

TEST(GetGreen16Test, CorrectGreenValueTest)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t randomGreenValue = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint64_t rgba = ((uint64_t)randomGreenValue) << 32;
        ASSERT_EQ(randomGreenValue, Pixelpp::GetGreen16(rgba));
    }
}

TEST(GetGreen8Test, CorrectGreenValueTest)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomGreenValue = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint32_t rgba = ((uint32_t)randomGreenValue) << 16;
        ASSERT_EQ(randomGreenValue, Pixelpp::GetGreen8(rgba));
    }
}

TEST(GetGreen4Test, CorrectGreenValueTest)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomGreenValue = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint16_t rgba = ((uint16_t)randomGreenValue) << 8;
        ASSERT_EQ(randomGreenValue, Pixelpp::GetGreen4(rgba));
    }
}

/* TESTING THE GET BLUE FUNCTIONS */

TEST(GetBlue16Test, CorrectBlueValueTest)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t randomBlueValue = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint64_t rgba = ((uint64_t)randomBlueValue) << 16;
        ASSERT_EQ(randomBlueValue, Pixelpp::GetBlue16(rgba));
    }
}

TEST(GetBlue8Test, CorrectBlueValueTest)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomBlueValue = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint32_t rgba = ((uint32_t)randomBlueValue) << 8;
        ASSERT_EQ(randomBlueValue, Pixelpp::GetBlue8(rgba));
    }
}

TEST(GetBlue4Test, CorrectBlueValueTest)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomBlueValue = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint16_t rgba = ((uint16_t)randomBlueValue) << 4;
        ASSERT_EQ(randomBlueValue, Pixelpp::GetBlue4(rgba));
    }
}


/* TESTING THE GET ALPHA FUNCTIONS */

TEST(GetAlpha16Test, CorrectAlphaValueTest)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint16_t randomAlphaValue = (uint16_t)(rand() / RAND_MAX) * 0xFFFF;
        uint64_t rgba = ((uint64_t)randomAlphaValue);
        ASSERT_EQ(randomAlphaValue, Pixelpp::GetAlpha16(rgba));
    }
}

TEST(GetAlpha8Test, CorrectAlphaValueTest)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomAlphaValue = (uint8_t)(rand() / RAND_MAX) * 0xFF;
        uint32_t rgba = ((uint32_t)randomAlphaValue);
        ASSERT_EQ(randomAlphaValue, Pixelpp::GetAlpha8(rgba));
    }
}

TEST(GetAlpha4Test, CorrectAlphaValueTest)
{
    for (int i = 0; i < CASE_NUM; i++)
    {
        uint8_t randomAlphaValue = (uint8_t)(rand() / RAND_MAX) * 0x0F;
        uint16_t rgba = ((uint16_t)randomAlphaValue);
        ASSERT_EQ(randomAlphaValue, Pixelpp::GetAlpha4(rgba));
    }
}




int main(int argc, char* argv[])
{
    srand(time(0));

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}