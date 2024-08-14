// accept n numbers from user and print their sum an avg

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int size;
    printf("enter no of values :");
    scanf("%d",&size);

    int numbers[size];
    int sum = 0;

    for(int i=0;i<size;i++)
    {
        printf("enter a numner:");
        scanf("%d",&numbers[i]);
    }
    

    for(int i=0;i<size;i++)
    {
         sum = sum + numbers[i];
    }

    printf("sum of array is :%d, avg is :%d",sum,sum/size);

    return 0;
}
