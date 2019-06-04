/*Given a singly linked list and a position, delete a linked list node at the given position.
Example:
Input: position = 1, Linked List = 8->2->3->1->7
Output: Linked List =  8->3->1->7

Input: position = 0, Linked List = 8->2->3->1->7
Output: Linked List = 2->3->1->7 */

//#include<stdio.h>
//#include<stdlib.h>
//
//struct LL
//{
//	int data;
//	struct LL* next;
//};
//
//void DeleteANode(LL* head,int pos)
//{
//	int count=0;
//	LL* ptr = head;
//	LL* nodeToBeDeleted = NULL;
//	while(ptr!=NULL && count<(pos-1))
//	{
//			ptr=ptr->next;
//			count++;
//	}
//	nodeToBeDeleted = ptr->next;
//	ptr->next = ptr->next->next;
//	free(nodeToBeDeleted);
//}
//
///* It will be a bad approach if we will return head pointer again and again... and adding
//an element like this will involve traversing an element till end and then add. */
//// Copied from Geeksforgeeks
//void Push(struct LL** head_ref,int element)
//{
//	LL* newElement=(struct LL*)malloc(sizeof(LL));
//	newElement->data = element;
//	newElement->next = *head_ref;
//	*head_ref = newElement;
//}
//
//void Traverse(LL* head)
//{
//	LL* ptr = head;
//	while(ptr!=NULL)
//		{
//			printf("%d->",ptr->data);
//			//printf("\n");
//			ptr=ptr->next;
//		}
//}
//
//int main()
//{
//	int pos;
//	LL* head = NULL;
//	Push(&head,8);
//	Push(&head,5);
//	Push(&head,7);
//	Push(&head,3);
//	Push(&head,9);
//	Traverse(head);	
//
//	printf("\nEnter the position from which you want to remove an element ");
//	scanf("%d",&pos);
//	DeleteANode(head,pos);
//
//	Traverse(head);
//	getchar();
//	return 0;
//}