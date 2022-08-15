#include<stdio.h>
struct student
{
	int rno;
	int fee;
}s[5];


int main()
{

//stu a;
s[0].rno=1001;
s[0].fee=500;
printf("%u and %u",s[0].rno,s[0].fee);	
return 0;	
}

