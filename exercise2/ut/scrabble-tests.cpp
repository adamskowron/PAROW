#include "gtest/gtest.h"
#include "scrabble.hpp"

struct ScrabbleTestSuite {};


TEST(ScrabbleTestSuite, test1)
{
  ASSERT_EQ(compute_score("ABCDE"), 10);
}



TEST(ScrabbleTestSuite, test2)
{
  ASSERT_EQ(compute_score("ADBFKJQ"), 33);
}


TEST(ScrabbleTestSuite, test3)
{
  ASSERT_EQ(compute_score("cabbage"), 14);
}


TEST(ScrabbleTestSuite, test4)
{
  ASSERT_EQ(compute_score("EDCBA"), 10);
}
