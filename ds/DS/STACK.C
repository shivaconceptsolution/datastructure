/*program for array operation*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 5
int stack[max];
int top=-1;

void push();
void pop();
void trav();

void main()
{
   int ch;
   clrscr();

   while(1)
   {
     printf("\n enter 1 for push");
     printf("\n enter 2 for pop");
     printf("\n enter 3 for traverse");
     printf("\n enter 4 for exit");

     printf("\n enter ur choice:- ");
     scanf("%d",&ch);

     switch(ch)
     {
       case 1:
	   push();
	   break;
       case 2:
	   pop();
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
void push()
{
   int item;
   if(top==max-1)
   {
     printf("\n satck is full or overflow");
     getch();
     return;
   }

   printf("\n enter item to be pushed:- ");
   scanf("%d",&item);

   top=top+1;
   stack[top]=item;

   printf("\n item inserted\n");
}
void pop()
{
   int item;
   if(top==-1)
   {
    printf("\n stack is empty or underflow");
    getch();
    return;
   }

   item=stack[top];
   top=top-1;
   printf("\n deleted item =%d",item);
}
void trav()
{
   int i;
   for(i=top;i>=0;i--)
   printf("\n %d",stack[i]);
}
