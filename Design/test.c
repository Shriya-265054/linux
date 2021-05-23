#include "update.h"
#include "unity.h"
#include "unity_internals.h"


info *acc=NULL;
void setUp()
{

}
void tearDown()
{

}
int empid;
char empname[60];
int salary;
int leave;
char address[60];
char personal_mail_id[15];
int phone_no;
char marital_status[50];
char BU[100];
char role[50];

void test_search_by_empid(void)
{
    info temp = {0};
    TEST_ASSERT_EQUAL(EMPID_EXIST,search_by_empid(acc,12345,&temp));
    TEST_ASSERT_EQUAL(EMPID_EXIST,search_by_empid(acc,22354,&temp));
    TEST_ASSERT_EQUAL(EMPID_DOESNT_EXISTS,search_by_empid(acc,1234564,&temp));
    TEST_ASSERT_EQUAL(EMPID_DOESNT_EXISTS,search_by_empid(acc,323450,&temp));

}

void test_update(void)
{
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,123,0,1));
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,1234,6,1));
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,123,7,1));
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,123,1,1));
}
int main (void)
{
    UNITY_BEGIN();
    RUN_TEST(test_update);
    RUN_TEST(test_search_by_empid);
    return UNITY_END();
}
