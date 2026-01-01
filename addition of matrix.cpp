// Addition of 3*2 matrix
  #include<stdio.h>
    int main()
    {
    	int a[3][2];
    	int b[3][2];
    	int c[3][2];
    	int i,j;
    	printf("Enter value of a matrix:\n");
    	for(i=0;i<3;i++)
    	{
    		printf("\n");
    	   for(j=0;j<2;j++)
    	     scanf("%d",&a[i][j]);
		}
		printf("Enter value of b matrix:\n");
		     	for(i=0;i<3;i++)
    	{
    		printf("\n");
    	   for(j=0;j<2;j++)
    	     scanf("%d",&b[i][j]);
		}
	for(i=0;i<3;i++)
    	{
    		printf("\n");
    	   for(j=0;j<2;j++)
    	     c[i][j]=a[i][j]+b[i][j];
		}
		printf("After addition new matrix formed is:");
    for(i=0;i<3;i++)
    	{
    		printf("\n");
    	   for(j=0;j<2;j++)
    	     printf("%d  ",c[i][j]);
		}
    return 0;
    }
