#include<stdio.h>
 
int main()
{
    int my_arr[5], i;
    int *p,max;
    p = my_arr;
    max=0;
    // p = &my_arr[0]; // you can also do this
     for(i = 0; i < 5; i++)
    {
    
        scanf("%d", p + i );
    }
    max=*p;
    for(i =1 ; i < 5; i++)
    {
    	if(max<*(p+i))
    	max=*(p+i);
        printf("Value of a[%d] = %d\t", i, *(p + i) );
        printf("Address of a[%d] = %u\n", i, p + i );
    }
    printf("max element is %d",max);
 
    // signal to operating system program ran fine
    return 0;
}

