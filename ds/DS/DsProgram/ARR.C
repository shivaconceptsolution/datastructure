#include<stdio.h>
#include<conio.h>
#define max 5
int arr[max];
int n=0;
void insert_at_beg();
void insert_at_pos();
void insert_at_last();
void traverse();
void delete_at_pos();
void main()
{
	int ch;
	clrscr();
	do
	{
		printf("\n1.Insert at beg...");
		printf("\n2.Insert at perticular pos:");
		printf("\n3.Insert at Last");
		printf("\n4.Trav");
		printf("\n5.Delete at pos");
		printf("\nEnter Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert_at_beg();
				break;
			case 2:
				insert_at_pos();
				break;
			case 3:
				insert_at_last();
				break;
			case 4:
				traverse();
				break;
			case 5:
				delete_at_pos();
				break;
			case 6:
				exit(0);
		}
	}while(1);
}
void insert_at_last()
{

	int item;
	if(n>=max)
	{
		printf("\n Array Is Full");
	}
	else
	{
		printf("Enter Array Element:");
		scanf("%d",&item);
		arr[n]=item;
		n++;
	}
}
void insert_at_beg()
{
	int i,item;
	if(n>=max)
	{
		printf("\n Array Is Full");
	}
	else
	{
	printf("\n Enter Item:");
	scanf("%d",&item);
	for(i=n-1;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=item;
	n++;
	}
}
void traverse()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}
}
void insert_at_pos()
{
	int item;
	int pos,i;
	if(n>=max)
	{
		printf("Array Is Full");
	}
	else
	{
		printf("\n Enter pos:");
		scanf("%d",&pos);
		printf("\n Enter Item:");
		scanf("%d",&item);
		for(i=n-1;i>=pos-1;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[pos-1]=item;
		n++;

	}
}
void delete_at_pos()
{
     int item,pos,i;
     if(n==0)
     {
	printf("\n Array Is Empty");
     }
     else
     {
	printf("\n Enter pos:");
	scanf("%d",&pos);
	item=arr[pos-1];
	for(i=pos-1;i<=n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	printf("%d Is Deleted",item);
	n--;
     }
}