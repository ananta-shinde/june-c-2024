#include<stdio.h>
#include"arrayFunction.h"
// return_type identifier (datatype argument1,datatype argument2){ body}

int main(int argc, char const *argv[])
{
    int numbers[] = {55,56,66,88,90};
    int marks[] = {45,55,56,58};
    int noOfElements = sizeof(numbers)/sizeof(numbers[0]);
    // sumOfArray(numbers,sizeof(numbers))
   
    int result = findValueInArray(numbers,noOfElements,808);
    if(result == -1)
    {
        printf("number not found");
    }
    else{
        printf("number %d found",result);
    }

    return 0;
}
