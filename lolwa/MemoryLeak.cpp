#include<iostream>
using namespace std;

int* Add(int* a,int* b )
{
	int* c=(int*)malloc(sizeof(int)); // Allocated in heap.
	printf("Address c pointer holding %u",c);
	printf("\nAddress of c pointer %u",&c);
		(*c) = (*a) + (*b);
		return c;
}

//int main()
//{
//	int a = 4;
//	int b = 6;
//	//int *p = Add(&a,&b);
//	int* ptr = 0x10B;
//	printf("\nvalue of NULL pointer is %d",ptr);
//	//printf("\nvalue after adding %d",*p);
//	getchar();
//}