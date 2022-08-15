#include<stdio.h>
#include<conio.h>
void main()
{
  int *p,*q,*r,a,b,c;
  clrscr();

  p=&a;
  q=&b;
  r=&c;

  printf("\n enter a and b:- ");
  scanf("%d%d",p,q);

  *r=*p+*q;

  printf("\n sum of %d and %d = %d",*p,*q,*r);
  getch();
}
