//Program to take 5 records of book+(title,author,price) and display those books which are written by Ram.
#include<stdio.h>
struct book{
	char title[30];
	char author[25];
	int price;
};
  int main()
  {
  	struct book b[5];
  	int i;
  		for(i=0;i<5;i++){
	   
   	if(i==0){
   		printf("Enter %dst book title, author, and price: \n",i+1);
   		scanf("%s%s%d",b[i].title,b[i].author,&b[i].price);
	   }
 else if(i==1){
   	printf("Enter  %dnd book title, author, and price: \n",i+1);
   		scanf("%s%s%d",b[i].title,b[i].author,&b[i].price);
	}
  else if(i==2){
  	printf("Enter %drd books title, author, and price: \n",i+1);
   		scanf("%s%s%d",b[i].title,b[i].author,&b[i].price);
  }	
  else{
  	printf("Enter %dth books title, author, and price: \n",i+1);
   		scanf("%s%s%d",b[i].title,b[i].author,&b[i].price);
  }
}
printf("\n\n\n");
	printf("Those books written by ram are:\n");
	for (i=0;i<5;i++)
	{
	if(strcmp(b[i].author,"Ram")==0 ||strcmp(b[i].author,"ram")==0)
	   {
		printf("Title:%s  Author:%s  Price:%d\n",b[i].title,b[i].author,b[i].price);
       }	
	}	
	
  	return 0;
  }
