


#include "unity_internals.h"
#include "unity.h"
#include "car_service_test.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_is_id_valid()
{
    TEST_ASSERT_EQUAL(0,is_id_valid('000000'));
    TEST_ASSERT_EQUAL(1,is_id_valid('0000'));
}



int test_main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_is_id_valid);

    return UNITY_END();
}



int main()
{
   test_main();
   return 0;

}