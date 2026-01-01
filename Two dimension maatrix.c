// Two dimension matrix
  #include<stdio.h>
    int main()
    {
    	int a[2][2];
    	int i,j;
    	//input
    	printf("Enter value of 2*2 matrix:\n");
    	for(i=0;i<2;i++)
    	{
    	   for(j=0;j<2;j++)
    	     scanf("%d",&a[i][j]);
		}
    	//output
		     	for(i=0;i<2;i++)
	   {
	   	printf("\n");
    	   for(j=0;j<2;j++)
    	     printf("%3d",a[i][j]);
		}
    
    return 0;
    }
