/*Program to take 15 records of book+(title,author,price) and:
-display all book records.
-display those books which are written by Ram.
-display those books which title starts with 'B'.
-display those books which price is at most 400.
*/
#include<stdio.h>
int i;

struct book{
	char title[30];
	char author[25];
	int price;
};struct book b[15];
void input()
{
		for(i=0;i<15;i++){
	   
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
}
void display1()
{
	//display all book records:
printf("\n\n\n");
printf("All books records are:\n");
    for(i=0;i<15;i++)
	{
		printf("Title:%s  Author:%s  Price:%d\n",b[i].title,b[i].author,b[i].price);
    }  

}
void display2()
{
//display those books written by Ram:
    printf("\n\n\n");
	printf("Those books written by ram are:\n");
	for (i=0;i<15;i++)
	{
	if(strcmp(b[i].author,"Ram")==0 ||strcmp(b[i].author,"ram")==0)
	   {
		printf("Title:%s  Author:%s  Price:%d\n",b[i].title,b[i].author,b[i].price);
       }	
	}	
	
}
void display3()
{
//display those books which title starts with 'B'.
  printf("\n\n\n");
	printf("Those books which title starts with 'B' are:\n");
    for(i=0;i<15;i++)
	{
		if(b[i].title[0]=='B')
		{
		printf("Title:%s  Author:%s  Price:%d\n",b[i].title,b[i].author,b[i].price);
		}
	}
	
}
display4()
{
//display those books which price is at most 400.
  printf("\n\n\n");
	printf("Those books which price is at most 400 are:\n");
    for(i=0;i<15;i++)
	{
		if(b[i].price<=400)
		{
			printf("Title:%s Author:%s Price:%d\n",b[i].title,b[i].author,b[i].price);
		}
		}	
	
}
   int main()
   {
   	
   input();
   display1();
   display2();
   display3();
   display4();
   	return 0;
   }
