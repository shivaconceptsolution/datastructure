#include<stdio.h>
int main()
{
	int i=0;
/*	char arr[1][12];
	
	int i=0,j=0;
	for(i=0;i<1;i++)
	{
		for(j=0;j<12;j++)
		{
			scanf("%c",&arr[i][j]);
		}
	}*/
	
	char arr[100];
	puts("enter mobileno");
	for(i=0;i<3;i++)
	{
		scanf("%c",&arr[i]);
	}
    for(i=0;arr[i]!=NULL;i++)
    {
    	printf("%c",arr[i]);
	}
	
	return 0;
	
	
	
}
