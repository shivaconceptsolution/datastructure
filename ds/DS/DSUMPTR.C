#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
  float *p,*q,*r;
  clrscr();

  p=(float*)malloc(4);
  q=(float*)malloc(4);
  r=(float*)malloc(4);


  printf("\n enter a and b:- ");
  scanf("%f%f",p,q);

  *r=*p+*q;

  printf("\n sum of %f and %f = %f",*p,*q,*r);
  free(p);
  free(q);
  free(r);
  getch();
}
