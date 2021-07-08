#include "unity.h"
#include "calc.h"
void setUp()
{
}
void tearDown()
{
}

void test_sum(void)
{
  // function calls of the form compute("9+9") should return 18
  // assume all digits are single digits and are positive only
}
void test_difference(void)
{
  // function calls of the form compute("2-3") should return -1
  // assume all digits are single digits and are positive only
}
void test_multiply(void)
{
  // function calls of the form compute("9*9") should return 81
  // assume all digits are single digits and are positive only
}
void test_division(void)
{
  TEST_ASSERT_EQUAL(0, compute("1/0")); // Return 0 if denominator is 0
  TEST_ASSERT_EQUAL(1, compute("9/9")); 
  TEST_ASSERT_EQUAL(1, compute("2/4")); // ceiled value is expected
  TEST_ASSERT_EQUAL(2, compute("6/4")); // ceiled value is expected
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_sum);
  RUN_TEST(test_difference);
  RUN_TEST(test_multiply);
  RUN_TEST(test_division);
  return UNITY_END();
}
