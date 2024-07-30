#include<stdio.h>
int main(int argc, char const *argv[])
{
   // declaration of array : datatype identifier[capacity]   //capacity = no of elements
    // int numbers[5];  
    int numbers[5] = {100,120,500,400,800}; // initialization

   
   // update an array
    numbers[1] = 750;

    printf("Enter a number:");
    scanf("%d",&numbers[3]);

    // print array
    for(int i=0;i<5;i++)
    {
        printf("%d\t",numbers[i]);
    }


    return 0;
}
