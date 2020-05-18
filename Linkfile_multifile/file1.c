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

int maxarray (int* a, int b){
	int temp = a[0];
	for (int i = 0; i<b; i++){
	if (temp<a[i])	temp = a[i];
	return temp;
	}
}