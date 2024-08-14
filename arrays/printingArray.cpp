#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5] = {20,15,12,56,23};

    for(int i=0;i<5;i=i+2)
    {
        printf("%d\t",numbers[i]);
    }

    printf("\n even numbers from array\n");
    for(int i=0;i<5;i++)
    {
        if(numbers[i]%2 == 0){
            printf("%d\t",numbers[i]);
        }
    }
    return 0;
}
