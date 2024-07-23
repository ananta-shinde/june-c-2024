#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        sum = sum+i;
    }
    printf("%d",sum);
    return 0;
}
