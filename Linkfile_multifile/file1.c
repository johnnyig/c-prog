#include <stdio.h>
#include "hello.h"

int add (int a,int b)
{

  return a+b;
}

int max (int a, int b){
	if (a>=b)	return a;
	else return b;
}

int get_array_max (int* a, int b){
	int temp = a[0];
	for (int i = 1; i<b; i++){
	if (temp<a[i])	temp = a[i];
	}
	return temp;
}

// return the smallest value in an int array
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