#include<stdio.h>
int main()
{
  int arr[] = {5,6,9,4,2,8};
  int i;
  int f=arr[0],s=arr[0];
  
  for(i=1;i<=5;i++)
  {
       if(arr[i]>f)	
        f=arr[i];
	   
	  
  	}	
  for(i=1;i<=5;i++)
  {
  	   
       if(arr[i]>s && arr[i]!=f)	
        s=arr[i];
	   
	  
  	}
  printf("%d",s);
	
return 0;
	
}
