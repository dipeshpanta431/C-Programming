// Take length and breadth of 4 rectangles and display their area.
 #include<stdio.h>
    int main()
    {
    	float length[4];
    	float breadth[4];
    	float area[4];
    	int i;
    	printf("Enter length and breadth of 4 rectangles: \n");
    	for(i=0;i<4;i++){
    		scanf("%f %f",&length[i],&breadth[i]);
		}
		for(i=0;i<4;i++){
			area[i]=length[i]*breadth[i];
			printf("Area of %d rectangle:%f\n",i+1,area[i]);
        	}
    	return 0;
    	 
	}
