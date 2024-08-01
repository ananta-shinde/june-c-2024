// accept n numbers from user and print their sum an avg

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int size;
    printf("enter size of array :");
    scanf("%d",&size);
    int numbers[size];

    for(int i=0;i<size;i++)
    {
        printf("enter a number");
        scanf("%d",&numbers[i]);
    }


    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum+numbers[i];
    }

    printf("Sum of numbers is : %d, avg is :%d",sum,sum/size);
    
   
    return 0;
}
