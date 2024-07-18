#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,result,temp;
    printf("Enter a number :");
    scanf("%d",&num);

    temp = num;

    // for(int i=0;i<4;i++)
    // {
    //      result = num/10;
    //      num = result;
    // }

    int count = 0;
    while(num>0){
         result = num/10;
         num = result;
         count= count+1;
    }
   
    // printf("%d",count);
    printf("\n your number is :%d, no of digits:%d",temp,count);
    return 0;
}
