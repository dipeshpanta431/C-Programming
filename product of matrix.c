// Product of 3*2 matrix
  #include<stdio.h>
    int main()
    {
    	int a[3][2];
    	int b[2][3];
    	int c[3][3];
    	int i,j,k;
    	printf("Enter value of a matrix:\n");
    	for(i=0;i<3;i++)
    	{
    		printf("\n");
    	   for(j=0;j<2;j++)
    	     scanf("%d",&a[i][j]);
		}
		printf("Enter value of b matrix:\n");
		     	for(i=0;i<2;i++)
    	{
    		printf("\n");
    	   for(j=0;j<3;j++)
    	     scanf("%d",&b[i][j]);
		}
			for(i=0;i<3;i++)
    	{
printf("\n");
    	   for(j=0;j<3;j++){
    	   for(k=0;k<2;k++)
    	   {
    	     c[i][j]=c[i][j]+a[i][k]*b[k][j];
		   }		  
        printf("%d ",c[i][j]);
		   }
		}
		
    	return 0;
	}

