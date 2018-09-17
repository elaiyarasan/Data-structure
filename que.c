#include<stdio.h>
#include <stdbool.h>

#define MAX 6
int arr[MAX];
int last=-1;
int front=0;
int itemcount=0;

bool isfull()
{
if(itemcount==MAX)
{
printf("the memory was full\n");
}
return 0;
}

int peek(){
return arr[front];
}

int size()
{
return itemcount;
}
int push(int data)
{
if(!isfull())
{
if(last == MAX-1) {
         last = -1;            
      } 
arr[++last]=data;
itemcount++;
}
else
{
printf("Alacated memory is full\n");
}
return 0;
}


int main()
{
int data;
push(1);
push(2);
push(3);
push(4);
push(5);
push(6);
push(11);

for(int i=0;i<MAX;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}