#include<stdio.h>

int sumOfthree(int n1,int n2,int n3)
{
    return n1+n2+n3;
}

int sumOfArray(int arr[],int size)
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum+arr[i]+2;
    }
    return sum;
}
int largestOfthree(int n1,int n2,int n3)
{
    if(n1>n2 && n1>n3)
    {
        return n1;
    }else if(n2>n1 && n2>n3){
        return n2;
    }
    else{
         return n3;
    }
}
int main(int argc, char const *argv[])
{
    int n1 = 20,n2 =35,n3=56;
    int numbers[5] = {20,30,50,20,35};
    printf("\nlargest number is :%d",largestOfthree(n1,n2,n3));
    
    n1 =200;
    printf("\nlargest number is :%d",sumOfthree(n1,n2,n3));
    printf("Addition is %d",sumOfArray(numbers,5));
   
    return 0;
}
