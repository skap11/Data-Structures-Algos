/*Given a linked list, write a function to reverse every k nodes (where k is an input to the function).

Example:
Inputs:  1->2->3->4->5->6->7->8->NULL and k = 3 
Output:  3->2->1->6->5->4->8->7->NULL. 

Inputs:   1->2->3->4->5->6->7->8->NULL and k = 5
Output:  5->4->3->2->1->8->7->6->NULL. */

#include<stdio.h>

struct LL
{
	int data;
	struct LL* next;
};

void Push(struct LL** head_ref,int element)
{
	LL* newElement=(struct LL*)malloc(sizeof(LL));
	newElement->data = element;
	newElement->next = *head_ref;
	*head_ref = newElement;
}

void Traverse(LL* head)
{
	LL* ptr = head;
	while(ptr!=NULL)
		{
			printf("%d->",ptr->data);
			//printf("\n");
			ptr=ptr->next;
		}
}

//struct LL* ReverseInGroups(LL* head,int size)
//{
//	int count = 0;
//	LL* current = head;
//	LL* next = head->next;
//	LL* temp = NULL;
//	LL* prev = NULL;
//	int itr = 0;
//	while(current!=NULL)
//	{
//		while(count < size)
//		{
//			current->next = prev ;
//			prev=current;
//			current=next;
//			count++;
//		}
//		if(itr == 0)
//		{
//			temp = head;
//			head = prev;
//		}
//		temp->next = prev;
//		temp = prev; 
//		prev = NULL;
//	}
//
//	return head;
//}

//struct node *reverse (struct node *head, int k)
//{
//    struct node* current = head;
//    struct node* next = NULL;
//    struct node* prev = NULL;
//    int count = 0;   
//     
//    /*reverse first k nodes of the linked list */
//    while (current != NULL && count < k)
//    {
//        next  = current->next;
//        current->next = prev;
//        prev = current;
//        current = next;
//        count++;
//    }
//     
//    /* next is now a pointer to (k+1)th node 
//       Recursively call for the list starting from current.
//       And make rest of the list as next of first node */
//    if (next !=  NULL)
//       head->next = reverse(next, k); 
// 
//    /* prev is new head of the input list */
//    return prev;
//}

//int main()
//{
//	int size;
//	LL* head = NULL;
//	Push(&head,8);
//	Push(&head,5);
//	Push(&head,7);
//	Push(&head,3);
//	Push(&head,9);
//	Traverse(head);	
//
//	printf("\nEnter the size in which you want to divide the array size");
//	scanf("%d",&size);
//	head = ReverseInGroups(head,size);
//
//	Traverse(head);
//	getchar();
//	return 0;
//}