#include "gtest/gtest.h"
#include "../classes/FloatRange.h"

TEST(Main_Functions, RangeCheck) {
  FloatRange range;
  range.SetFirst(100);
  range.SetSecond(200);
  EXPECT_EQ(range.rangeCheck(150), true);
}