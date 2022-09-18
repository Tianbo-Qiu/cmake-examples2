#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertions) {
  // expect two strings not to be equal
  EXPECT_STRNE("hello", "world");
  // expect equality
  EXPECT_EQ(7 * 6, 42);
}
