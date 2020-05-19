#include "hello.h"
#include <stdio.h>

int main()
{
	int c,d,i,f;
	int arr[10] = {2, 3, 4, 5, 8, 12, 102, 512, 0, -1};
	c=add(1,2);
	d=subtract(4,5);
	f=get_array_max (arr, 10);
	printf("Add:%d\n",c);
	printf("Subtract:%d\n",d);
	printf("Array largest value:%d\n",f);
	
	printf("Original array\n");
	for(i = 0; i<10; i++){
	printf("%d ",arr[i]);
	}
	
	reverse_array_order(arr, 10);
	
	printf("\nReversed array\n");
	for(i = 0; i<10; i++){
	printf("%d ",arr[i]);
	}
}
