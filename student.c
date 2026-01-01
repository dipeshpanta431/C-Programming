#include<stdio.h>

    int main()
    {
    	FILE *s;
    	int a[20];
    	int i;
    	
    	s=fopen("Numbers.txt","r");
    	for(i=0;i<20;i++){
    	fscanf(s,"%d",&a[i]);
		}
			for(i=0;i<20;i++){
				if(a[i]%2==0){
    	printf("%d ",a[i]);
				}
			}
    	
		
    	   fclose(s);	
    	return 0;
	}
