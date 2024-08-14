#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    // int numbers[5]; // static allocation
    int* numbers;
    // numbers =(int*) malloc(40);
    numbers =(int*) calloc(5,sizeof(int));

    numbers[0] = 100;
    numbers[2] = 200;
    for(int i=0;i<5;i++)
    {
        printf("%d\t",numbers[i]);
    }
     realloc(numbers,80);
     printf("\n after reallocation\n");

      for(int i=0;i<20;i++)
    {
        printf("%d\t",numbers[i]);
    }

    free(numbers);
    
    return 0;
}
