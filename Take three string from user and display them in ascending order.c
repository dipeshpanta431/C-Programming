// Take three string from user and display them in ascending order.
#include<stdio.h>
#include<string.h>
    int main()
    {
     char a[10];
     char b[10];
     char c[10];
     puts("Enter three string:");
     gets(a);
     gets(b);
     gets(c);
     if(strcmp(a,b)<0)
     {
     	if(strcmp(b,c)<0)
     	printf("%s %s %s",a,b,c);
     	else
     	printf("%s %s %s",a,c,b);
	 }
	 else if(strcmp(b,a)<0)
	 {
	 	if(strcmp(a,c)<0)
	 	printf("%s %s %s",b,a,c);
	 	else
	 	printf("%s %s %s",b,c,a);
	 }
	 else if(strcmp(c,a)<0)
	 {
	 	if(strcmp(a,b)<0)
	 	printf("%s %s %s",c,a,b);
	 	else 
	 	printf("%s %s %s",c,b,a);
	 }
	 return 0;
}
