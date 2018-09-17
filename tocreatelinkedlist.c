#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
}*head;
void createlist(int n);
void displaynode();
void reversenode();

int main()
{
int n;
printf("Enter the number of Element\n");
scanf("%d",&n);
createlist(n);
displaynode();
reversenode();
printf("Reversed list\n");
displaynode();

return 0;
}

void createlist(int n)
{
int data,i;
struct node*temp,*new;
head=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Unable to allocate the memory\n");
}
else
{
printf("Enter the number of Element1:\n");
scanf("%d",&data);

head->data=data;
head->next=NULL;
temp=head;
for(i=2;i<=n;i++)
{
new=(struct node*)malloc(sizeof(struct node));
if(new==NULL)
{
printf("Unable to allocate the memory\n");
}
else
{
printf("Enter the number of Element1:%d\n",i);
scanf("%d",&data);
new->data=data;
new->next=NULL;
temp->next=new;
temp=temp->next;
}
}
printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
}
}

void displaynode()
{
struct node *temp;
temp=head;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}

void reversenode()
{
struct node *curnode,*prevnode;
int i;
if(head==NULL)
{
printf("The list is empty\n");
}
else
{
if(head!=NULL)
{
prevnode=head;
curnode=head->next;
head=head->next;
prevnode->next=NULL;
while(head!=NULL)
{
head=head->next;
curnode->next=prevnode;
prevnode=curnode;
curnode=head;
}
head=prevnode;
}
}
}








