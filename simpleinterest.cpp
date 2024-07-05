// WAP to calculate simple interest
#include<stdio.h>
int main()
{
    int p,r,n,si;
    printf("enter amount:");
    scanf("%d",&p);
    printf("enter rate of interest:");
    scanf("%d",&r);
    printf("enter no of years:");
    scanf("%d",&n);
    si = (p*r*n)/100;
    printf("Interest is %d",si);
    printf("\nFinal amount is %d",p+si);
   
   
}
