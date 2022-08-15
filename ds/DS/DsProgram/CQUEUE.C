/*program for array operation*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 5
int cqueue[max];
int rear=-1,front=-1;

void insert();
void del();
void trav();

void main()
{
   int ch;
   clrscr();

   while(1)
   {
     printf("\n enter 1 for insert");
     printf("\n enter 2 for delete");
     printf("\n enter 3 for traverse");
     printf("\n enter 4 for exit");

     printf("\n enter ur choice:- ");
     scanf("%d",&ch);

     switch(ch)
     {
       case 1:
	   insert();
	   break;
       case 2:
	   del();
	   break;
       case 3:
	   trav();
	   break;
       case 4:
	   exit(0);
       default:
	  printf("\n Wrong Choice");
     }
   }
}
void insert()
{
    int item;

    if(front==(rear+1)%max)
    {
       printf("\n queue is full");
       getch();
       return;
    }

    if(rear==-1)
    front=0;

    printf("\n enter item to be inserted:- ");
    scanf("%d",&item);

    rear=(rear+1)%max;

    cqueue[rear]=item;

    printf("\n item inserted:- ");
}

void del()
{
    int item;

    if(front==-1)
    {
      printf("\n queue is empty or underflow");
      getch();
      return;
    }


    item=cqueue[front];

    if(front==rear)
    front=rear=-1;

    else
    front=(front+1)%max;

    printf("\n deleted item =%d",item);
}
void trav()
{
      int i;

      if(front==-1)
      return;

      i=front;
      do
      {
	printf("\n%d",cqueue[i]);
	i=(i+1)%max;

      }while(i!=(rear+1)%max);

}
