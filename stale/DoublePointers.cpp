/*Use Double Pointer: This approach follows the simple C rule: 
if you want to modify local variable of one function inside another function, pass pointer to that variable. 
So we can pass pointer to the head pointer to modify the head pointer in our deleteFirst() function.*/
#include<iostream>
using namespace std;

// Swapping of pointers holding the address of variables.
void SWAP(int** a_ref,int** b_ref)
{
	int* ptr=*a_ref;
	*a_ref= *b_ref;
	*b_ref=ptr;
}

// To check the swapping using single pointers 
// Failed considerably. 
void swap(int* a,int* b)
{
	int* ptr = a;
	a=b;
	b=ptr;
}
//
//int main()
//{
//	int a =4,b=6;
//	printf("Values of a and b pointers are %d and %d respectively",a,b);
//	int* ptra = &a;
//	int *ptrb = &b;
//	printf("\nValues of a and b pointers are %d and %d respectively",ptra,ptrb);
//	//SWAP(&ptra,&ptrb);
//	swap(ptra,ptrb);
//	printf("\nValues of a and b pointers after getting swapped are %d and %d respectively",ptra,ptrb);
//	getchar();
//}