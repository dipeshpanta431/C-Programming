//Take hour minute and second of 7 time and display them.
#include<stdio.h>
  int main()
  {
  	int hour[7];
  	int minute[7];
  	int second[7];
  	int i;
  	for(i=0;i<7;i++){
  		printf("Enter hour minute and second of %d time\n",i+1);
  		scanf("%d %d %d",&hour[i],&minute[i],&second[i]);
	  }
	  for(i=0;i<7;i++){
	  	printf("%d Time- Hour:%d Minute:%d Second:%d\n",i+1,hour[i],minute[i],second[i]);
	  }
  	
  	return 0;
  }
