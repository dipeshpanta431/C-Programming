// Take only negative numbers as input from user.
  #include<stdio.h>
    int main()
    {
    	int i;
    RE_ENTER:	printf("Enter negative integer:\n");
    	scanf("%d",&i);
    	if(i>=0)
    	goto RE_ENTER;
    	printf("%d",i);
    	return 0;
	}
