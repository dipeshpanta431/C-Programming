// Take 15 characters from user and display only vowels.
#include<stdio.h>
char d[15];
int v;
void input()
{
    puts("Enter 15 characters: \n");
  	for(v=0;v<15;v++)
	{
    d[v]=getchar();
  	}
}
void output()
{
		puts("Vowels characters are: ");
  	for(v=0;v<15;v++)	
	{
	  
  		if(d[v]=='a' ||d[v]=='e'||d[v]=='i'||d[v]=='o'||d[v]=='u'||d[v]=='A' ||d[v]=='E'||d[v]=='I'||d[v]=='O'||d[v]=='U')
		{
  			putchar(d[v]);
  		}
  	}
  	
}  	
  int main()
  {
  	input();
  	output();
  			return 0;
  }
