// Take 13 integers from user and display no. of even numbers.
  #include<stdio.h>
   int main()
   {
   	int a[13];
   	int i;
   	int count=0;
   	printf("Enter 13 integers: ");
   	for(i=0;i<13;i++){
   		scanf("%d",&a[i]);
   		}
   		printf("Even numbers are: ");
   		for(i=0;i<13;i++){
   			if(a[i]%2==0){
   				printf("%d ",a[i]);
   				count++;
			   }
		   }
		   printf("\n%d ",count);
   	return 0;
   }
