#include<stdio.h>
struct A
{
	int a;
	float b;
}S;

union B
{
	int a;
	float b;
}U;
int main()
{
	printf("%d\n",sizeof(S));
	printf("%d\n",sizeof(U));
	
}
