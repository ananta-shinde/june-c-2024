#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,facto = 1;
    printf("enter a number :");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        facto = facto*i;
    }
    printf("factorial of %d is %d",num,facto);
    return 0;
}
