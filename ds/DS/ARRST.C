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
  struct student s[3];
  int i;
  clrscr();

  printf("\n enter 3 records:- ");

  for(i=0;i<3;i++)
  {
  printf("\n enter roll number:- ");
  scanf("%d",&s[i].rno);
  printf("\n enter name:- ");
  scanf("%s",s[i].name);
  }
  printf("\n records are:-");
  printf("\n rno\tname");
  for(i=0;i<3;i++)
  {
  printf("\n %d\t%s",s[i].rno,s[i].name);
  }
  getch();
}