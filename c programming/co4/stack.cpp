#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();
#define size 10
int s[size],top=-1;
int main()
{
	int ch;
	while(1)
	{
		printf("\n****MENU****\n");
		printf("1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.EXIT\n");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
			        break;
			case 2: pop();
			        break;
		    case 3: display();
		            break;
		    case 4: peek();
		            break;
		    case 5: exit(0);
		    default:printf("Invalid choice");
		    
		}
		}
		return 0;
		}
void push()
{
	int val;
	if(top==size-1)
	printf("Stack is overflown and cannot push");
	else
	{
		printf("Enter value to be pushed");
		scanf("%d",&val);
		top++;
		s[top]=val;
	}
	
	
}
void pop()
{
	if(top==-1)
	printf("Stack is underflown and cannot pop");
	else
	{
		printf("%d is popped out",s[top]);
		top--;
	}
}
void peek()
{
	if(top==-1)
	printf("Stack is underflown and cannot peek");
	else
	printf("%d is peek element",s[top]);
}
void display()
{    int i;
	if(top==-1)
	printf("Stack is underflown and cannot display");
	else
	{
		for(i=top;i>=0;i--)
		printf("%d\n",s[i]);
	}
	
}















