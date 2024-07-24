// Write a program in C to read 10 numbers from the keyboard and find their sum and average.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,sum = 0;
    for(int i=0;i<10;i++)
    {
         printf("enter number %d:",i+1);
         scanf("%d",&num);
         sum = sum + num;
    }
   
    printf("\nsum :%d",sum);
    printf("\navg :%d",sum/10);

   

    return 0;
}
