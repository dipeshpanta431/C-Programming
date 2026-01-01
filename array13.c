//Program to take 10 integers in two different array and display the sum of first index of first array and last index of second array and so on.
   #include<stdio.h>
   	int a[10];
    	int b[10];
    	int i;
    	int j=9;
    
   void input()
   {
   		for(i=0;i<10;i++){
    		printf("Enter a[%d] integer:",i);
    		scanf("%d",&a[i]);
		}
		for(i=0;i<10;i++){
    		printf("Enter b[%d] integer:",i);
    		scanf("%d",&b[i]);
		}
		
   }
   void output()
   {
   	for(i=0;i<10;i++){
			printf("The sum of a[%d] and b[%d] is: %d\n",i,j,a[i]+b[j]);
			j--;
		
   }
}
    int main()
    {
    	input();
    	output();
		return 0;
    }
	
