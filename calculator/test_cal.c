#include"unity_internals.h"
#include"unity.h"
void setUp() {}
void tearDown(){}
void test_div(void)
{
  TEST_ASSERT_EQUAL(1, div(10,10));
  TEST_ASSERT_EQUAL(0, div(10,0));
  TEST_ASSERT_EQUAL(0, sub(10,11));
  TEST_ASSERT_EQUAL(5, sub(10,5));
  TEST_ASSERT_EQUAL(20, add(10,10));
}
int test_main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_div);

  return UNITY_END();
}
int main()
{
    test_main();
    return 0;
}