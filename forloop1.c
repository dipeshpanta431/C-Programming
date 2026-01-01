// take two integers from user and calculate average of multiple of 13 between them.
#include<stdio.h>
int main()
 {
 	int a,b;
	int i;
	int count=0;
	int sum=0;
	int average=0;
 	printf("enter two integers:\n");
 	scanf("%d %d",&a,&b);
 	printf("Multiples of 13 are:");
 	if(a<b){
	 
 	for (i=a+1;i<b;i++)
 	{
 		if(i%13==0){
printf("%d ",i);
        count++;
        sum=sum+i;
		 }
	 }
}
else if(b<a){
	for(i=b+1;i<a;i++){
		if(i%13==0){
			printf("%d ",i);
        count++;
        sum=sum+i;

		}
	}
}
	 average=sum/count;
        printf("\nThere are %d multiples of 13 between given integers.\n",count);
        printf("The sum of multiples of numbers between given integers is: %d\n",sum);
        printf("The average of multiples between given integers is: %d\n",average);
 	
 	
 	
    return 0;
 }
