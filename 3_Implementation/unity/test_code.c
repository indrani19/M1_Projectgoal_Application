#include "unity.h"
#include "code.h"

void setup()
{   
}

void teardown()
{
}
void test_Billheader(void)
{
}

void test_Billbody()
{
}

void test_Billfooter()
{
    TEST_ASSERT_EQUAL_VOID(2022,Billfooter(2022));
}
int test_main()
{
    UNITY_BEGIN();

    RUN_TEST(test_Billheader);
    RUN_TEST(test_Billbody);
    RUN_TEST(test_Billfooter);
    return UNITY_END();
}