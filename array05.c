// Take 16 float data from user and display average of them.
#include <stdio.h>
  int main()
  {
  	float a[16];
  	int i;
  	int count=0;
  	float sum=0;
  	float average=0;
  	printf("Enter 16 float data: ");
  	for(i=0;i<16;i++){
  		scanf("%f",&a[i]);
	  }
	  for(i=0;i<16;i++){
	  	sum=sum+a[i];
	  	count++;
	  	}
	  	average=sum/count;
	  	printf("Average is: %f",average);
	  
  	return 0;
  }
