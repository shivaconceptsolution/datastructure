/*program for linked list*/
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>
struct cdlist
{
  int data;
  struct cdlist *prev;
  struct cdlist *next;
};
typedef struct cdlist node;
node *head;
void  create()
{
  head=(node*)malloc(sizeof(node));
  head->prev=head->next=head;
  head->data=0;
}

void insert_at_beg();
void insert_at_end();
void insert_at_spe();
void del_at_beg();
void del_at_end();
void del_at_spe();
void trav();
void btrav();

void main()
{
   int ch;
   clrscr();

   create();

   while(1)
   {
     printf("\n enter 1 for insert_at_beg");
     printf("\n enter 2 for insert_at_end");
     printf("\n enter 3 for insert_at_spe");
     printf("\n enter 4 for del_at_beg");
     printf("\n enter 5 for del_at_end");
     printf("\n enter 6 for del_at_spe");
     printf("\n enter 7 for traverse");
     printf("\n enter 8 for back traverse");
     printf("\n enter 9 for exit");

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
	  btrav();
	  break;
      case 9:
	 exit(0);
      default:
	printf("\n wrong choice");
     }

   }
}
void insert_at_beg()
{
    node *p,*temp;

    p=(node*)malloc(sizeof(node));
    printf("\n enter item to be inserted:- ");
    scanf("%d",&p->data);

    if(head->next==head)
    {
      p->prev=p->next=head;
      head->prev=head->next=p;
    }
    else
    {
       p->prev=head;
       p->next=head->next;
       temp=head->next;
       head->next=p;
       temp->prev=p;
    }
    printf("\n item inserted\n");
}
void insert_at_end()
{

    node *p,*temp;

    p=(node*)malloc(sizeof(node));
    printf("\n enter item to be inserted:- ");
    scanf("%d",&p->data);

    if(head->prev==head)
    {
      p->prev=p->next=head;
      head->prev=head->next=p;
    }
    else
    {
       p->next=head;
       p->prev=head->prev;
       temp=head->prev;
       head->prev=p;
       temp->next=p;
    }
    printf("\n item inserted\n");
}

void insert_at_spe()
{



}
void del_at_beg()
{

   node *p,*temp;
   if(head->next==head)
   {
     printf("\n list is empty");
     getch();
     return;
   }

   if(head->prev==head->next)
   {
     p=head->next;
     head->prev=head->next=head;
   }
   else
   {
      p=head->next;
      head->next=p->next;
      temp=p->next;
      temp->prev=head;
   }

   printf("\n deleted item =%d",p->data);
   free(p);
}
void del_at_end()
{



}
void del_at_spe(){}
void trav()
{
    node *temp;
    temp=head->next;

    while(temp!=head)
    {
      printf("\n%d",temp->data);
      temp=temp->next;
    }
}
void btrav()
{
   node *temp;
   temp=head->prev;
   while(temp!=head)
   {
     printf("\n%d",temp->data);
     temp=temp->prev;
   }
}