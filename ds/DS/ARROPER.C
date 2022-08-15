/*program for array operation*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 10
int a[max],n;

void insert();
void del();
void trav();

void main()
{
   int i,ch;
   clrscr();
   printf("\n enter item to be inserted:- ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);

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
  int item,i,pos;

  if(n==max)
  {
    printf("\n array is full oroverflow");
    getch();
    return;
  }

  printf("\n enter item to be inserted:- ");
  scanf("%d",&item);
  printf("\n enter its position:- ");
  scanf("%d",&pos);

  for(i=n-1;i>=pos-1;i--)
  {
     a[i+1]=a[i];
  }
  a[pos-1]=item;
  n=n+1;
  printf("\n item inserted\n");
}
void del()
{
   int item,i,pos;
   if(n==0)
   {
     printf("\n array is empty or unserflow");
     getch();
     return;
   }
   printf("\n enter position of the item to be deleted:-");
   scanf("%d",&pos);

   item=a[pos-1];

   for(i=pos-1;i<n;i++)
   a[i]=a[i+1];

   n=n-1;
   printf("\n deleted item =%d",item);
}
void trav()
{
  int i;
  for(i=0;i<n;i++)
  printf("\n%d",a[i]);
}
