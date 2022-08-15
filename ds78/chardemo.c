#include<stdio.h>
struct stu
{
	int rno;
	char *name;
};
int main()
{
	struct stu s[5];
	s.name = malloc(5*sizeof(char));
    scanf("%d",&s.rno);
    printf("%d",s.rno);
    fflush(stdin);
	fgets(s.name,11,stdin);
	fputs(s.name,stdout);
	
	return 0;
	
}
