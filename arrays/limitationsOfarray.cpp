#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5] = {20,55,45,12,45};
    int num = 20;
    int* ptr;
    ptr = numbers;

    printf("%d",&ptr[2]);
    printf("\n%d",&ptr[2]+1);

    

    return 0;
}
