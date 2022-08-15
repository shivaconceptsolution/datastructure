/*program for array operation*/
#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct stack
{
   int data;
   struct stack *next;
};
typedef struct stack node;
node *top=NULL;

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
   node *p;
   p=(node*)malloc(sizeof(node));
   printf("\n enter item to pushed:- ");
   scanf("%d",&p->data);

   p->next=top;
   top=p;
   printf("\n item inserted\n");
}
void pop()
{
    node *p;
    if(top==NULL)
    {
      printf("\n stack is empty or underflow");
      getch();
      return;
    }
    p=top;
    top=top->next;

    printf("\n deleted item =%d", p->data);
    free(p);

}
void trav()
{
node *temp;
   temp=top;
   while(temp!=NULL)
   {
     printf("\n %d",temp->data);
     temp=temp->next;
   }


}
