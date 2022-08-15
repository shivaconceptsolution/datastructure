#include <stdio.h>

struct Book
{
    char *name;
    int price;
};

int main()
{
    struct Book obj[3]; 
     
    int i,j;
    for(i=0;i<3;i++)
    {
    	printf("enter price for %d index",i);
    	scanf("%d",&obj[i].price);
    	
    	printf("enter name for %d index",i);
    	fgets(obj[i].name,sizeof(obj[i].name),stdin);
    	//fflush(stdin);
    	/*for(j=0;j<3;j++)
    	{
    		printf("enter name for element for object  %d index %d",i,j);
    		scanf("%c",&obj[i].name[j]);
    		fflush(stdin);
		}*/
	}
	
	for(i=0;i<3;i++)
    {
    	printf("price is %d",obj[i].price);
    	printf("name is ");
    	fputs(obj[i].name,stdout);
    /*	for(j=0;j<3;j++)
    	{
    		
    		printf("%c",obj[i].name[j]);
		}*/
    	printf("\n");
	}    
    return 0;
}
