// Take 16 double data from user and display their sum.
   #include<stdio.h>
   int main()
   {
   	double a[16];
   	int i;
   	double sum=0;
   	printf("Enter 16 double data: ");
   	for(i=0;i<16;i++){
   		scanf("%lf",&a[i]);
	   }
	   for(i=0;i<16;i++){
	   	sum=sum+a[i];
	   }
	   printf("Sum is: %lf ",sum);
   	return 0;
   }
