#include <stdio.h>

struct Book
{
    char name[3];
    int price;
};

int main()
{
	int i,j;
    struct Book a;      //Single structure variable
    struct Book* ptr;   //Pointer of Structure type
    ptr = &a;
    ptr->name[0]='x';
    ptr->price=500;
    printf("%c",ptr->name[0]);
    printf("%d",ptr->price);
    
    struct Book b[2];  //Array of structure variables
    struct Book* p;     //Pointer of Structure type
    p = &b;  
    for(i=0;i<2;i++)
	{
	  
	   (p+i)->price=1200;
	   for(j=0;j<3;j++)
	   {
	   	
	   	(p+i)->name[j]='r';
	   }
	    
	  
	} 
	printf("output is");
	for(i=0;i<2;i++)
	{
	  
	 
	   printf("%d",(p+i)->price);
	   for(j=0;j<3;j++)
	   {
	   	printf("%c",(p+i)->name[j]);
	   }
	   printf("\n"); 
	  // p++;	
	} 
    
    return 0;
}
