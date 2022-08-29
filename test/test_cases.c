/*
   Troglobyte stdlib:
   author: Michael Gene Brockus
   gmail: <michaelbrockus@gmail.com>
*/
#include "troglodyte/package.h"
#include <troglodyte/utest.h>
#include <stdlib.h>


/*
 >
 >  project setup teardown functions if needed
 >
*/
void setup(void)
{
    // TODO.
} // end of function setUp


void teardown(void)
{
    // TODO.
} // end of function tearDown


/*
 >
 > list of all the test cases for this project
 >
*/
static void test_simpleAssertTrue(void)
{
    trog_assert_its_true(1);
} // end of test case


static void test_simpleAssertNull(void)
{
    trog_assert_its_nullptr(NULL);
} // end of test case


static void test_simpleAssertCompare(void)
{
    int dummy = 3;
    trog_assert_equal_int(3, dummy);
} // end of test case


static void test_simpleAssertCall(void)
{
    trog_assert_equal_str("Salutations and welcome to C", salutations());
} // end of test case


/*
 >
 > here main is used as the test runner
 >
*/
int main(void)
{
    //
    // setup and teardown can be set to nullptr.
    UTestRunner *runner = trog_utest_init(setup, teardown);

    trog_utest_run(runner, test_simpleAssertTrue);
    trog_utest_run(runner, test_simpleAssertNull);
    trog_utest_run(runner, test_simpleAssertCall);
    trog_utest_run(runner, test_simpleAssertCompare);

    return trog_utest_end(runner);
} // end of function main
