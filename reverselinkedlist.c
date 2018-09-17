#include<stdio.h>
#include<stdlib.h>

struct Node 
{
int data;
struct Node *next;

};

void printList(struct Node *n)
{
while (n != NULL)
{
	printf(" %d ", n->data);
	n = n->next;
}
}

int main()
{
struct Node* head = NULL;
struct Node* second = NULL;
struct Node* third = NULL;
struct Node* temp = NULL;

head = (struct Node*)malloc(sizeof(struct Node)); 
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));
temp = (struct Node*)malloc(sizeof(struct Node));

head->data = 1; 
head->next = second; 

second->data = 2; 
second->next = third; 

third->data = 3; 
third->next = temp;
	
	if((third->data)!=NULL)
	{
	temp->data = head->data;
	temp->next = head;
	
	head->data = third->data;
	head->next = second;
	second->data = second->data; 
second->next = third;
third->data = temp->data;
	third->next = NULL;
	
printList(head);

}

	

return 0;
}
