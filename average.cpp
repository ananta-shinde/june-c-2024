#include<stdio.h>
int main()
{
    int n1,n2,n3,avg; // declaration of variables
    printf("enter a number:");
    scanf("%d",&n1);
    printf("enter a number:");
    scanf("%d",&n2);
    printf("enter a number:");
    scanf("%d",&n3);
    avg = (n1+n2+n3)/3;
    printf("\navg of numbers is :%d",avg);
    
}