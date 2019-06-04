// The Algorithm takes O(n) tome compleity and O(1) space complexity.
// Doesnt work for 0 values in array.

// 1. Tried counting individual 0 but posed problem for number whose index value is 0 and at 0th location if zero is present.
// 2. At whichever index 0 will come that no duplicates will not be determined by this algorithm.
#include<iostream>
#include<stdlib.h>
using namespace std;
void printRepeating(int arr[], int size)
{
  int i,count=0;
  printf("The repeating elements are: \n");
  for (i = 0; i < size; i++)
  {
	if (arr[abs(arr[i])] > 0)
	  arr[abs(arr[i])] = -arr[abs(arr[i])];
	else if(arr[abs(arr[i])] == 0)
		count++;
	else
	  printf(" %d ", abs(arr[i]));
  }
  if(count > 0)
	  printf(" %d ", 0);
}
 
//int main()
//{
//  int arr[] = {1,1, 2, 3, 1, 3, 0, 6, 9};
//  int arr_size = sizeof(arr)/sizeof(arr[0]);
//  printRepeating(arr, arr_size);
//  getchar();
//  return 0;
//}
