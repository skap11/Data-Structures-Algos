#include<stdio.h>
#include<stdlib.h>

struct LL
{
	int data;
	LL* next;
};
// Creating a linked list with 3 nodes.
//int main()
//{
//	LL* head=NULL;
//	LL* second=NULL;
//	LL* third=NULL;
//	head = (struct LL*)malloc(sizeof(LL));
//	second = (struct LL*)malloc(sizeof(LL));
//	third = (struct LL*)malloc(sizeof(LL));
//	head->data = 1;
//	head->next = second;
//	second->data = 2;
//	second->next = third;
//	third->data = 3;
//	third->next = NULL;
//	LL* ptr=head;
//	printf("Elements in Linked List are \n");
//		while(ptr!=NULL)
//		{
//			printf("%d",ptr->data);
//			printf("\n");
//			ptr=ptr->next;
//		}
//		getchar();
//}