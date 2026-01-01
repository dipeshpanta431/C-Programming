// Program to print from 1 to 10 using for loop,while loop,and do while loop.

//For loop
#include<stdio.h>
 int main()
 {
 	int i=0;
 	for(i=0;i<10;i++)
 	{
 		printf("%d\n",i);
	 }

//do while loop
 	do{
 		printf("%4d",i+1);
 		i++;
	 }while(i<10);
 
 
//while loop 
 	while(i<10)
	 {
          printf("%4d",i+1);
          i++;
     }
 	return 0;
 }
 
