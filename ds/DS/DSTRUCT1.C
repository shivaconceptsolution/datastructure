/*program for structure*/
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct student
{
  int rno;
  char name[20];
};
typedef struct student node;
void main()
{
  node *s;
  clrscr();

  s=(node*)malloc(sizeof(node));

  printf("\n enter roll number:- ");
  scanf("%d",&s->rno);
  printf("\n enter name:- ");
  scanf("%s",s->name);

  printf("\n record is:- %d\t%s",s->rno,s->name);

  free(s);
  getch();
}