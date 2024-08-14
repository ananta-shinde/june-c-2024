#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5] = {20,25,56,45,23};// initialization

    // update a value in array
    numbers[4] = 100;

    // read a value from
    printf("%d\n",numbers[4]);

    //print an array
    for(int i=0;i<5;i++)
    {
         printf("%d\t",numbers[i]);
    }
   



    return 0;
}
