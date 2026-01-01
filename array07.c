// Take 11 float data from user and display them in reverse order.
  #include<stdio.h>
    int main()
    {
    	float a[11];
    	int i;
    	printf("Enter 11 float data:");
    	for(i=0;i<11;i++){
    		scanf("%f",&a[i]);
		}
		for(i>11;i>=0;i--){
			printf("%.2f ",a[i]);
		}
    	return 0;
	}
