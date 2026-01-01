/*Display:
    1  1  1  1
    2  2  2  2
    3  3  3  3
    4  4  4  4
    5  5  5  5  */
#include<stdio.h>
    int main()
	{
		int i,j;
		for(i=0;i<5;i++)
		{
			printf("\n");
			for(j=0;j<4;j++)
			printf("%4d",i+1);
		}
		return 0;
    }    
