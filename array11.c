//Take 5 integers in two array of size 5 each and add them.
  #include<stdio.h>
    int main()
    {
    	int a[5];
    	int b[5];
    	int c[5];
    	int i;
    	printf("Enter 5 integers for array a\n");
    	for(i=0;i<5;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	printf("Enter 5 integers for array b\n");
    	for(i=0;i<5;i++)
    	{
    		scanf("%d",&b[i]);
		}
		for(i=0;i<5;i++)
		{
			c[i]=a[i]+b[i];
		}
		for(i=0;i<5;i++)
		{
			printf("Result after adding a%d+b%d:%d\n",i+1,i+1,c[i]);
		}
    	return 0;
	}
