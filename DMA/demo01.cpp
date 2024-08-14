#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int numbers[4];
    // int *numbers;
    // numbers = (int*)malloc(16);
    // numbers = (int*)calloc(4,sizeof(int));

    numbers[0] = 25;

    realloc(numbers,25);

    for(int i=0;i<3;i++)
    {
        printf("%d\t",numbers[i]);
    }

    free(numbers);

    for(int i=0;i<3;i++)
    {
        printf("%d\t",numbers[i]);
    }

    return 0;
}
