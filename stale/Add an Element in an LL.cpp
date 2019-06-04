// 3 Types of Insertion in a LL.
/* 
1. At Start
2. At Middle
3. At End
*/

//#include<iostream>
//#include<stdio.h>
//
//struct LL
//{
//	int data;
//	struct LL* next;
//};
//
//void Traverse(LL* head)
//{
//	LL* ptr = head;
//	while(ptr!=NULL)
//		{
//			printf("%d",ptr->data);
//			printf("\n");
//			ptr=ptr->next;
//		}
//}
//
//// If we will not return head then the head will remain the same in the main function and it will not show the LL from updated head.
//struct LL* AddElementAtFirst(LL* head,int element)
//{
//	LL* AdditionalElement = (LL*)malloc(sizeof(LL));
//	AdditionalElement->data = element;
//	AdditionalElement->next = head;
//	head = AdditionalElement;
//	return head;
//}
//
//void AddElementAtMiddle(LL* head,int element,int pos)
//{
//	int count=0;
//	LL* ptr = head;
//	while(ptr!=NULL && count<(pos-1))
//	{
//			ptr=ptr->next;
//			count++;
//	}
//	LL* AdditionalElement = (LL*)malloc(sizeof(LL));
//	AdditionalElement->data = element;
//	AdditionalElement->next = ptr->next;
//	ptr->next = AdditionalElement;
//}
//
//void AddElementAtLast(LL* head,int element)
//{
//		LL* ptr = head;
//		while(ptr->next!=NULL)
//		{
//			ptr=ptr->next;
//		}
//	LL* AdditionalElement = (LL*)malloc(sizeof(LL));
//	AdditionalElement->data = element;
//	AdditionalElement->next = NULL;
//	ptr->next = AdditionalElement;
//}

//Driver Program
//int main()
//{
//	int element,choice;
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
//	printf("You can insert an element at 3 positions\n");
//	printf("1. At Start\n2. At Middle\n3. At End\n");
//	printf("Enter Your choice ");
//	scanf("%d",&choice);
//	printf("Enter an element you want to insert ");
//	scanf("%d",&element);
//	if(choice == 1)
//	{
//		head = AddElementAtFirst(head,element);
//	}
//	else if(choice==2)
//	{
//		int pos;
//		printf("At which position do you want to put the element at ");
//		scanf("%d",&pos);
//		AddElementAtMiddle(head,element,pos);
//	}
//	else if(choice==3)
//	{
//		AddElementAtLast(head,element);
//	}
//	Traverse(head);
//	getchar();
//	return 0;
//}