#include "stack.h"
#include "unity.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_create_stack(void)
{
    #if 0
        1) Status of creation
        2) Size
        3) type of element
        4) Initialize stack with known values
     #endif
    stack_t my_stack;

  TEST_ASSERT_EQUAL(NULL_PTR, create_stack(NULL, 10));
  
  TEST_ASSERT_EQUAL(SUCCESS, create_stack(&my_stack, 10));

  stack_t *my_stack1 = malloc(sizeof(stack_t));
  TEST_ASSERT_EQUAL(SUCCESS, create_stack(my_stack1, 10));

  TEST_ASSERT_EQUAL(SUCCESS, delete_stack(my_stack1));
  TEST_ASSERT_EQUAL(SUCCESS, delete_stack(&my_stack));

  free(my_stack1);
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_create_stack);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}
