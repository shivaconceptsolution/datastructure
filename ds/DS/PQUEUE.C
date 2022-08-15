//CIRCULAR LINKLIST
#include<conio.h>
#include<stdio.h>
#include<process.h>
#define max 10
int a[max],n=0,rear=-1,front=0;
void insert();
void del();
void trav();
void main()
{
  int ch;
clrscr();
while (1)
	{
	printf("\n1. insertion ");
	printf("\n2. deletion ");
	printf("\n3. traversal");
	printf("\n4. exit");
	printf ("\nenter your choice-> ");
	scanf ("%d",&ch);
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

		default :
		printf (" INVALID choice ") ;
		break;
	      }//switch case end
       }//while end

}// program end
void insert()
{
   int i;
   if(rear==max-1)
   {
     printf("\n queue is full");
     return;
   }

   rear=rear+1;
   printf("\n enter item :- ");
   scanf("%d",&a[rear]);
   n++;
   printf("\n item inserted");

}
void trav()
{
  int i;

  if(rear==-1)
  {
  printf("no item in array");
  return;
  }
  for(i=front;i<=rear;i++)
  printf("\n%d",a[i]);
}
void del()
{
  int i,m,loc;
  if(rear<front)
  {
     printf(" list is empty");
     return;
  }

  m=a[0];
  for(i=0;i<n;i++)
  {
     if( m>a[i])
     {
       m=a[i];
       loc=i;
     }
  }

  printf("\n delete item =%d",m);

  for(i=loc;i<n;i++)
  a[i]=a[i+1];

  n--;

  if(n==0)
  {
    rear=-1;
    front=0;
  }

}