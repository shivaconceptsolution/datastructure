/*program for structure*/
#include<stdio.h>
#include<conio.h>
struct student
{
  int rno;
  char name[20];
};
void main()
{
  struct student s;
  clrscr();

  printf("\n enter roll number:- ");
  scanf("%d",&s.rno);
  printf("\n enter name:- ");
  scanf("%s",s.name);

  printf("\n record is:- %d\t%s",s.rno,s.name);
  getch();
}