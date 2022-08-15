#include<stdio.h>
int main()
{
	char arr[5];
	int i,j,c;
	char ch;
	ch = getc();
//	putc(ch);
	for(i=0;i<7;i++)
	{
	
		scanf("%c",&arr[i]);
	    arr[i] = getc();
		
	}
	for(i=0;i<7;i++)
	{
	
		printf("number of char is %c\n",arr[i]);
		
	}
	
	
	return 0;
	
}

