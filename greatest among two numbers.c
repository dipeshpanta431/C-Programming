//Greatest among two numbers.
#include<stdio.h>
int main()
{
	int a,b;
	int c;
	printf("Enter two integers:\n");
	scanf("%d%d",&a,&b);
c=a>b?a:b;
printf("%d",c);
return 0;
}
