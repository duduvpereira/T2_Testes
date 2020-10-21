#include "foo.h"
#include "unity.h"
#include "unity_fixture.h"
#include "stdlib.h"
#include "string.h"

#include "float.h"

TEST_GROUP(Foo);

TEST_SETUP(Foo)
{
}

TEST_TEAR_DOWN(Foo)
{
}

int payment(float valor, char status[])
{
}


TEST(Foo, TestFoo1)
{
  // All of these should pass
  
  TEST_ASSERT_EQUAL(0, payment(0.02,"estudante"));
  TEST_ASSERT_EQUAL(0, payment(99999.00,"vip"));
  TEST_ASSERT_EQUAL(1, payment(0.00,"vip"));
  TEST_ASSERT_EQUAL(1, payment(10000.0,"vip"));
  TEST_ASSERT_EQUAL(2, payment(15659,"vipi"));
  TEST_ASSERT_EQUAL(0, payment(15659,"idoso"));
  TEST_ASSERT_EQUAL(2, payment(15659,"paulo"));
  TEST_ASSERT_EQUAL(2, payment(-5987,"vip"));
  TEST_ASSERT_EQUAL(1, payment("estudante",15000));
  
  
}

TEST(Foo, TestFoo2)
{
  // This test will fail
  TEST_ASSERT_EQUAL(1, payment(-5987,"vip"));
  //TEST_ASSERT_EQUAL(1, foo2(1,2));
}

