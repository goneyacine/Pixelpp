#include <gtest/gtest.h>
#include "Pixelpp.h"
#include <time.h>
#include <cstdlib>

#define CASE_NUM 1000


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




int main(int argc, char* argv[])
{
    srand(time(0));

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}