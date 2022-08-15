/*program for linked list*/
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>
struct llist
{
  int data;
  struct llist *next;
};
typedef struct llist node;
node *start=NULL;

void insert_at_beg();
void insert_at_end();
void insert_at_spe();
void del_at_beg();
void del_at_end();
void del_at_spe();
void trav();

void main()
{
   int ch;
   clrscr();

   while(1)
   {
     printf("\n enter 1 for insert_at_beg");
     printf("\n enter 2 for insert_at_end");
     printf("\n enter 3 for insert_at_spe");
     printf("\n enter 4 for del_at_beg");
     printf("\n enter 5 for del_at_end");
     printf("\n enter 6 for del_at_spe");
     printf("\n enter 7 for traverse");
     printf("\n enter 8 for exit");

     printf("\n enter ur choice:- ");
     scanf("%d",&ch);

     switch(ch)
     {
       case 1:
	 insert_at_beg();
	 break;
      case 2:
	 insert_at_end();
	 break;
      case 3:
	 insert_at_spe();
	 break;
       case 4:
	 del_at_beg();
	 break;
      case 5:
	 del_at_end();
	 break;
      case 6:
	 del_at_spe();
	 break;
      case 7:
	 trav();
	 break;
      case 8:
	 exit(0);
      default:
	printf("\n wrong choice");
     }

   }
}
void insert_at_beg()
{
   node *p;
   p=(node*)malloc(sizeof(node));
   printf("\n enter item to be inserted:- ");
   scanf("%d",&p->data);

   p->next=start;
   start=p;

   printf("\n item inserted\n");
}
void insert_at_end()
{
   node *p,*temp;

   p=(node*)malloc(sizeof(node));

   printf("\n enter item to be inserted:- ");
   scanf("%d",&p->data);

   if(start==NULL)
   {
     p->next=start;
     start=p;
   }
   else
   {
     temp=start;
     while(temp->next!=NULL)
     {
       temp=temp->next;
     }
     p->next=NULL;
     temp->next=p;

     printf("\n item inserted\n");
}
}
void insert_at_spe()
{
   node *p,*temp;
   int pos,i;

   p=(node*)malloc(sizeof(node));
   printf("\n enter item to be inserted:- ");
   scanf("%d",&p->data);

   printf("\n enter position:- ");
   scanf("%d",&pos);

   i=1;
   temp=start;
   while(i<pos-1)
   {
     temp=temp->next;
     i++;
   }
   p->next=temp->next;
   temp->next=p;
   printf("\n item inserted");
}
void del_at_beg(){}
void del_at_end(){}
void del_at_spe(){}
void trav()
{
    node *temp;

    temp=start;
    while(temp!=NULL)
    {
      printf("\n %d",temp->data);
      temp=temp->next;
    }
}