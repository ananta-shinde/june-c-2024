#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    for(int i = 1;i<=num;i++)
    {
        printf("%d",i);
    }
    
    return 0;
}
