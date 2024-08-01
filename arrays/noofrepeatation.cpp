// accept a number from user and print if it is present in array or not,
// if present also print its nunber of occurance

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[10]={10,12,15,12,10,10,56,42,10,25};
    int num;
    printf("enter a number :");
    scanf("%d",&num);

    int count = 0;
    for(int i=0;i<10;i++){
       if( numbers[i] == num ){
            count++;
       } 
    }


    if(count == 0)
    {
        printf("Number not found in array");
    }else{
        printf("Number has occured %d times",count);
    }


    return 0;
}


