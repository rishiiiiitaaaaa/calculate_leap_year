#include<stdio.h>
void main()
{
    int a;
    printf("enter year to check leap year : \n");
    scanf("%d",&a);
    if(a%4==0)
        printf("leap year ");
    else
        printf(" not a leap year ");
    
}