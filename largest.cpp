#include<stdio.h>
#include "./functions/Mymath.h"
int main(int argc, char const *argv[])
{
    int n1,n2,n3;
    printf("enter a number:");
    scanf("%d",&n1);
    printf("enter a number:");
    scanf("%d",&n2);
    printf("enter a number:");
    scanf("%d",&n3);
    printf("largest number is %d\n",largestOfNumbers(n1,n2,n3));
    printf("addition number is %d",addition(n1,n2,n3));
    

    return 0;
}
