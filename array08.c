//Take name age and height of 3 students from user and display it.
#include<stdio.h>
	char name[3][30];
    	int age[3];
    	float height[3];
    	int i;
    
void input()
{
	for(i=0;i<3;i++){
    	printf("Enter name age and height of %d student: \n",i+1);
		scanf("%s %d %f",name[i],&age[i],&height[i]);
    }	
}
void output()
{
 for(i=0;i<3;i++){
    	printf("Student %d\n",i+1);
	
    	printf("Name:%s  Age:%d  Height: %.2f\n",name[i],age[i],height[i]);
}	
}
   int main()
    {
    input();
    output();
       
    	return 0;
	}
