#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    if(num == 0)
    {
        printf("Zero");
    }
    if(num == 1)
    {
        printf("One");
    }
    if(num == 2)
    {
        printf("Two");
    }
    if(num >9 || num < 0)
    {
        printf("invalid input");
    }
    return 0;
}
