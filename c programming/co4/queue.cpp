#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
#define size 10
int q[size],front=-1,rear=-1;
int main()
{
int ch;
	while(1)
	{
		printf("\n****MENU****\n");
		printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: enqueue();
			        break;
			case 2: dequeue();
			        break;
		    case 3: display();
		            break;
		    case 4: exit(0);
		    default:printf("Invalid choice");
		    
		}
		}
		return 0;
		}
void enqueue()
{
	int val;
	if(rear==size-1)
	printf("Queue is overflown and cannot enqueued");
	else
	{
		printf("Enter the value to be queued");
		scanf("%d",&val);
		rear++;
		q[rear]=val;
		if(front==-1)
		front=0;
	}
}
void dequeue()
{
if(front==-1||front>rear)
printf("Queue is overflown and cannot dequeued");
else
{
printf("%d is dequeued",q[front]);
front++;	
}
}
void display()
{
	int i;
	if(front==-1||front>rear)
printf("Queue is overflown and cannot display");
else
{
	for(i=front;i<=rear;i++)
	printf("%d\n",q[i]);
}
	
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
