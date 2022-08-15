#include<stdio.h>
#include<conio.h>
typedef struct Add obj;
struct Add
{
	int a;
	int b;
}

int main()
{
	int y;
//	struct Add obj;
	obj o;
	obj *p;
	p=&o;
	
//	p=&obj;
	p->a=10;
	p->b=20;
	y= (p->a)+(p->b);
	printf("%d",y);
	return 0;
	
}
