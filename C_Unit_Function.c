#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

int Fib (int);
int Palindrome(int);

int Fib(int a)
  {
    if (a <= 1)
      return a;
    return Fib(a-1) + Fib(a-2);
   }

void test_Fib()
{
    CU_ASSERT(Fib(8) == 21);
	CU_ASSERT(Fib(10) == 55);
}
int Palindrome(int num)
{
	int reversedN = 0, originalN, remainder;
	originalN = num;
	/* reversed integer is stored in reversedN */
    while (num != 0) 
	{
        remainder = num % 10;
        reversedN = reversedN * 10 + remainder;
        num = num / 10;
    }

    /* palindrome if orignalN and reversedN are equal */
    if (originalN == reversedN)
		return 1;
    else
        return 0;
}

void test_Palindrome()
{
    CU_ASSERT(Palindrome(4224) == 1);
    CU_ASSERT(Palindrome(1234) == 0);
}

int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("Palindrome_test", 0, 0);

    CU_add_test(suite, "Palindrome_Num", test_Palindrome);
    CU_add_test(suite, "fibonacci_Num", test_Fib);
	
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
