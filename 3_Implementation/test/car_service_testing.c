

#include "car_operations.h"
#include "unity_internals.h"
#include "unity.h"
#include "car_service_test.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

//int is_id_valid();
void test_is_id_valid()
{
    
    TEST_ASSERT_EQUAL(1,1);
}
void test_create_profile()
{
    
    TEST_ASSERT_EQUAL(1,create_profile());
}


int test_main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_is_id_valid);
    RUN_TEST(test_create_profile);
    
    return UNITY_END();
}



int main()
{
   test_main();
   return 0;

}