#include<stdio.h>
int MAX=8;
int stack[8];
int top=-1;

int isempty()
{
if(top==-1)
return 1;
else
 return 0;
}

int isfull()
{
if(top==MAX)
return 1;
else
 return 0;
}

int peek()//returns top of the stack
{
return stack[top];
}



int pop()//retri data
{
int data;
if(!isempty())
{
data = stack[top];
top=top-1;
return data;
}
else
{
printf("Data mem used is empty\n");
}
}

int push(int data)//pushing the data into stack
{
if(!isfull())
{
top = top+1;
stack[top]=data;
printf("pushed array stack%d\n",stack[top]);
}
else
{
printf("Data mem used is full\n");
}
}

int main()
{
push(8);
push(12);
push(13);
push(1);
push(4);
push(6);

printf("%d\n",peek());
while(!isempty())
{
int d=pop();
printf("Data poped %d\n",d);
}
return 0;
}