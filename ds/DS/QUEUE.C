/*program for array operation*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 5
int queue[max];
int rear=-1,front=0;

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

    if(rear==max-1)
    {
       printf("\n queue is full");
       getch();
       return;
    }
    printf("\n enter item to be inserted:- ");
    scanf("%d",&item);

    rear=rear+1;

    queue[rear]=item;

    printf("\n item inserted:- ");
}

void del()
{
    int item;

    if(rear<front)
    {
      printf("\n queue is empty or underflow");
      getch();
      return;
    }

    item=queue[front];

    front=front+1;

    printf("\n deleted item =%d",item);
}
void trav()
{
      int i;
      for(i=front;i<=rear;i++)
      printf("\n %d",queue[i]);

}
