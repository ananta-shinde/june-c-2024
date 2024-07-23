#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,count=0;
    printf("Enter value for n:");
    scanf("%d",&n);
    int i=1;
    int sum = 0;
    while(count<n){
        if(i%2!=0){
             printf("%d",i);
              count++;
              sum =sum+ i;
        }  
        i++;
    }
    printf("\n sum of numbers: %d",sum);

   
    return 0;
}
