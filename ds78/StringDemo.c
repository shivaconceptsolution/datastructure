#include<stdio.h>

int main()
{
//	char arr[2][2] = {{'h','e'},{'w','e'}};
    int max=5,i;
   // printf("enter size");
   // scanf("%d",&max);
   // char *arr[] = {"abc","mno"}; 
   // char *ptr;
   // ptr = (char*)malloc(max*sizeof(char));

	  int *ptr;
	  ptr = calloc(max,sizeof(int));
	
	
    for(i=0; i < max; i++)
    {
        printf("Enter ptr[%d]: ", i);
       
        scanf(" %d", ptr+i); 
    }
 
    printf("\nPrinting elements of 1-D array: \n\n");
 
    for(i = 0; i < max; i++)
    {
        
        printf("%d", ptr[i]);
        	
    }
	
/*	for(i=0;i<2;i++)
	{
		c=0;
		for(j=0;j<2;j++)
		{
			printf("%c",arr[i][j]);
			c++;
		}
		printf("number of char is %d",c);
		
	}
*/	
	
	return 0;
	
}

