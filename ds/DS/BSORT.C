/*program for bubble sort*/
#include<stdio.h>
#include<conio.h>
void bsort(int [],int );

void main()
{
  int a[20],n,i;
  clrscr();
  printf("\n enter number of terms:- ");
  scanf("%d",&n);
  printf("\n enter %d numbers:- ",n);

  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  clrscr();
  printf("\n before sort :- ");
  for(i=0;i<n;i++)
  printf(" %d",a[i]);

  bsort(a,n);

  printf("\n after sort :- ");
  for(i=0;i<n;i++)
  printf(" %d",a[i]);

  getch();
}
void bsort(int a[],int n)
{

   int i,j,t;
   for(i=1;i<n;i++)
   {
     for(j=0;j<n-i;j++)
     {
       if(a[j]>a[j+1])
       {
	 t=a[j];
	 a[j]=a[j+1];
	 a[j+1]=t;
       }
     }
   }
}
