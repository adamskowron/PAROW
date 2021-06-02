#include "gtest/gtest.h"
#include "day-of-year.hpp"

struct DayOfYearTestSuite {};

TEST(DayOfYearTestSuite, January1stIsFitstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2020), 1);
}


TEST(DayOfYearTestSuite, January1stIsFitstDayOfGapYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2000), 1);
}


TEST(DayOfYearTestSuite, AprilThirdDayOfGapYear)
{
  ASSERT_EQ(dayOfYear(3, 5, 200), 64);
}


