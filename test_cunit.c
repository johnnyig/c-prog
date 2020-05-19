#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

//int arr_elemnts = 5;
int tst_arr1[5] = {1,8,10,7,-5};
int tst_arr2[5] = {1,0,0,0,-1};


int get_array_max (int* a, int b){
	int temp = a[0];
	for (int i = 1; i<b; i++){
	if (temp<a[i])	temp = a[i];
	}
	return temp;
}

int get_array_min (int* a, int b){
	int temp = a[0];
	for (int i = 1; i<b; i++){
	if (temp>a[i])	temp = a[i];
	}
	return temp;
}

int get_array_sum (int* a, int b){
	int temp = 0;
	for (int i = 0; i<b; i++){
	temp+=a[i];
	}
	return temp;
}

double get_array_avg (int* a, int b){
	int temp = 0;
	for (int i = 0; i<b; i++){
	temp+=a[i];
	}
	return temp/b;
}

int array_pstvs (int* a, int b){
	int temp = 0;
	for (int i = 0; i<b; i++){
	if (a[i]>0)	temp++;
	}
	return temp;
}

int array_ngtvs (int* a, int b){
	int temp = 0;
	for (int i = 0; i<b; i++){
	if (a[i]<0)	temp++;
	}
	return temp;
}

int reverse_array_order (int* a, int b){
	int temp,i;
	for (i = 0; i<b/2; i++){
		temp = a[i];
		a[i] = a[b-1-i];
		a[b-1-i] = temp;
	}
	return 0;
}


void test_array_math(void){
	CU_ASSERT(get_array_max(tst_arr1,5) == 10);
	CU_ASSERT(get_array_min(tst_arr1,5) == -5);
	CU_ASSERT(get_array_avg(tst_arr1,5) == 4.2);
	CU_ASSERT(get__array_sum(tst_arr1,5) == 21);
	CU_ASSERT(array_pstvs(tst_arr1,5) == 4);
	CU_ASSERT(array_ngtvs(tst_arr1,5) == 1);
	
	CU_ASSERT(get_array_max(tst_arr2,5) == 1);
	CU_ASSERT(get_array_min(tst_arr2,5) == -1);
	CU_ASSERT(get_array_avg(tst_arr2,5) == 0.0);
	CU_ASSERT(get__array_sum(tst_arr2,5) == 0);
	CU_ASSERT(array_pstvs(tst_arr2,5) == 1);
	CU_ASSERT(array_ngtvs(tst_arr2,5) == 1);
	}

int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("array_test", 0, 0);

    CU_add_test(suite, "array_fun", test_array_math);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}