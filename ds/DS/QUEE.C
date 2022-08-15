//#include<stdio.h>
//#include<conio.h>
#define maxsize 5
int queue[maxsize];
int front=-1;
int rear=-1;
void insert();
void remove();
void traverse();
void main()
{
  int ch;
  clrscr();
  do
  {
	printf("\n1.insert\n2.remove\n3traverse\n4exit\n");
	printf("Enter Choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			insert();
			break;
		case 2:
			remove();
			break;
		case 3:
			traverse();
			break;
		case 4:
			exit(0);
	}
  }
  while(1);
}
void insert()
{
	int item;
	if(rear>=maxsize-1)
	 printf("\nQueue is Full..");
	 else
	 {
		printf("Enter Element");
		scanf("%d",&item);
		if(rear==-1)
		{
			 front=0;
			 rear=0;
		}
		else
		{
			rear=rear+1;
		}
		queue[rear]=item;
		printf("\n Item Inserted...");

	 }
}
void remove()
{
	int item;
	if(front!=-1)
	{
		item=queue[front];
		if(front==rear)
		{
		front=-1;
		rear=-1;
		}
		else
		{
			front=front+1;
			printf("No is Deleted..");
		}
	}
	else
	printf("\n Queue Is Empty....");
}
void traverse()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("   %d",queue[i]);
	}
}