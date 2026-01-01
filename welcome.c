#include<stdio.h>
   int main()
   {
   	FILE *f;
   	f=fopen("welcome.txt","w");
   	fprintf(f,"Welcome to file handling");
   	fclose(f);
   	return 0;
   }
