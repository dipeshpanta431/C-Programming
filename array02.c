// Program to take 15 integrs from user and display 9th and 13th integers.
#include<stdio.h>
int main()
{
    int a[15];
    int i;
    printf("enter 15 integers:\n");
    for(i=0;i<15;i++){
        scanf("%d ",&a[i]);
    }
    printf("9th number: %d\n",a[8]);
    printf("13th number: %d",a[12]);
    return 0;
}
