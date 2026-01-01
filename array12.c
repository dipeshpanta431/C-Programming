//Program to take 10 integers and display the sum of first index of array and last index of array,second and second last index of array and so on.
    #include<stdio.h>
    int main()
    {
    	int a[10];
    	int i;
    	int j=9;
    	for(i=0;i<10;i++){
    		printf("Enter a[%d] integer: \n",i);
    		scanf("%d",&a[i]);
		}
		for(i=0;i<5;i++){
			printf("The sum of a[%d] and a[%d] is %d.\n",i,j,a[i]+a[j]);
			j--;
		}
    	
    	return 0;
	}
