#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
}*head;
void createlist(int n);
void displaydata();
void insertnewdata();
void insertdatafront(int data);
void deletewithkey(int data);
int main()
{
int n,s,deletekey;
printf("Enter the number of element\n");
scanf("%d",&n);
createlist(n);
displaydata();
printf("Enter the digit to Enter the data infirst Element\n");
scanf("%d",&s);
insertdatafront(s);
displaydata();
printf("Enter the digit to Enter the data delete Element\n");
scanf("%d",&deletekey);
deletewithkey(deletekey);
displaydata();

return 0;
}

void createlist(int n)
{
int i,data;
struct node *temp,*newnode;
head=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Unable to allocate the memory\n");
}
else
{
printf("Enter the lists\n");
scanf("%d",&data);
head->data=data;
head->next=NULL;
temp=head;
for(i=2;i<=n;i++)
{
 newnode = (struct node *)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("Unable to allocate the memory\n");
break;
}
else
{
printf("Enter the list\n");
scanf("%d",&data);
newnode->data=data;
newnode->next=NULL;
temp->next=newnode;
temp= temp->next;
}
}
printf("List created\n");
}
}
void displaydata()
{
struct node *temp;

temp=head;
while(temp!=NULL) 
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
void insertdatafront(int data)
{
struct node *insert;
insert=(struct node*)malloc(sizeof(struct node));
insert->data=data;
insert->next=head;
head=insert->next;
}
void deletewithkey(int data)
{
struct node *curnode,*prevnode;
while(head!=NULL && head->data==data)
{
prevnode=head;
head=head->next;
free(prevnode);
return;
}
prevnode=NULL;
curnode=head;
while(curnode!=NULL)
{
if(curnode->data==data)
{
if(prevnode!=NULL)
{
prevnode->next=curnode->next;
}
free(curnode);
return;
}
prevnode=curnode;
curnode=curnode->next;
}


}




