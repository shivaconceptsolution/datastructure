/*program for linked list*/
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>
struct dlist
{
  int data;
  struct dlist *prev;
  struct dlist *next;
};
typedef struct dlist node;
node *start=NULL;
node *last=NULL;

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
   node *p;
   p=(node*)malloc(sizeof(node));
   printf("\n enter item to be inserted:- ");
   scanf("%d",&p->data);

   if(start==NULL)
   {
     p->prev=p->next=NULL;
     start=last=p;
   }
   else
   {
   p->prev=NULL;
   p->next=start;
   start->prev=p;
   start=p;
   }
   printf("\n item inserted");
}
void insert_at_end()
{
    node *p;
    p=(node*)malloc(sizeof(node));

    printf("\n enter item to be inserted:- ");
    scanf("%d",&p->data);

    if(last==NULL)
    {
      p->prev=p->next=NULL;
      start=last=p;
    }
    else
    {
       p->next=NULL;
       p->prev=last;
       last->next=p;
       last=p;
    }
   printf("\n item inserted");

}

void insert_at_spe()
{
      node *ptr,*temp;

      int pos,i;
      temp=start;
      ptr=(node*)malloc(sizeof(node));
      printf("\nEnter pos:");
      scanf("%d",&pos);
      printf("Enter item:");
      scanf("%d",&ptr->data);
      i=1;
      while(i<pos-1)
      {
       temp=temp->next;
       i++;
      }
      ptr->next=temp->next;
      ptr->prev=temp;
      (temp->next)->prev=ptr;
      temp->next=ptr;
      printf("Item Inserted....");
}
void del_at_beg()
{
    node *p;

    if(start==NULL)
    {
      printf("\n list is empty");
      getch();
      return;

    }
    if(start==last)
    {
      p=start;
      start=last=NULL;
    }
    else
    {
      p=start;
      start=start->next;
      start->prev=NULL;
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
	temp=start;
	do
	{
		printf("\t%d",temp->data);
		temp=temp->next;
	}while(temp!=NULL);

}
void btrav(){}