/*program for array operation*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<alloc.h>

struct queue
{
   int data;
   struct queue *next;
};
typedef struct queue node;
node *rear=NULL;
node *front =NULL;

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
    node *p;

    p=(node*)malloc(sizeof(node));
    printf("\n enter item to be inserted:- ");
    scanf("%d",&p->data);

    if(rear==NULL)
    {
      p->next=rear;
      rear=front=p;
    }
    else
    {
      p->next=NULL;
      rear->next=p;
      rear=p;
    }

    printf("\n item inserted\n");
}
void del()
{
   node *p;

   if(front==NULL)
   {
     printf("\n queue is empty");
     getch();
     return;
   }
   if(front==rear)
   {
     p=front;
     front=rear=NULL;
   }
   else
   {
      p=front;
      front=front->next;

   }
   printf("\n deleted item =%d",p->data);
   free(p);
}
void trav()
{
  node *temp;
  temp=front;
  while(temp!=NULL)
  {
    printf("\n %d",temp->data);
    temp=temp->next;
  }

}
