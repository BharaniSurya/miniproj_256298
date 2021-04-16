

#include "car_operations.h"
#include "unity_internals.h"
#include "unity.h"
#include "car_service_test.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

//int is_id_valid();
/*
void test_valid_operation()
{
    
    TEST_ASSERT_EQUAL(1,valid_operation(1));
    TEST_ASSERT_EQUAL(1,valid_operation(9));
    TEST_ASSERT_EQUAL(0,valid_operation(11));
    TEST_ASSERT_EQUAL(0,valid_operation(0));
}*/

void test_create_profile()
{
    
    TEST_ASSERT_EQUAL(1,create_profile());
}
void test_search_profile()
{
    TEST_ASSERT_EQUAL(1,search_profile());
}


int test_main(void)
{
    UNITY_BEGIN();

    //RUN_TEST(test_valid_operation);
    RUN_TEST(test_create_profile);
    RUN_TEST(test_search_profile);


    return UNITY_END();
}



int main()
{
   test_main();
   return 0;

}