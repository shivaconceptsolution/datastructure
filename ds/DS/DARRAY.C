/*program for dynamic array*/
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
   int *p,n,i;
   clrscr();

   printf("\n enter number of terms:- ");
   scanf("%d",&n);

   p=(int*)malloc(2*n);
   printf("\n p=%d",p);

   printf("\n enter %d numbers:- ",n);
   for(i=0;i<n;i++)
   {

   scanf("%d",p);
   p++;
   }
   p=p-n;

   printf("\n entered array is:- ");
   for(i=0;i<n;i++)
   {
     printf("\n%d",*p);
/*       printf("\n%d",p);*/
     p++;
   }
   free(p);

   p=(int*)malloc(2);
   printf("\n p=%d",p);
   getch();
}