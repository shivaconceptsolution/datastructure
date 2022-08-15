/*program for linked list*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
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

int main()
{
   int ch;
   

   while(1)
   {
    
     printf("\n enter 2 for insert_at_end");
    
     printf("\n enter 5 for del_at_end");
   
     printf("\n enter 7 for traverse");
    
     printf("\n enter 9 for exit");

     printf("\n enter ur choice:- ");
     scanf("%d",&ch);
     fflush(stdin);
     
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
    printf("five");
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
   return 0;
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

void del_at_end()
{
	
    node *p;
    p=last; 
   
   last = last->prev;
   last->next=NULL;
  printf(" deleted item is %d",p->data); 
  free(p);
   
   


}
