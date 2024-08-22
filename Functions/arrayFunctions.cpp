#include<stdio.h>

// return_type identifier (datatype argument1,datatype argument2){ body}
void printArray(int arr[],int len)
{
     for(int i=0;i<len;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}


int sumOfarray(int arr[],int len)
{
    int sum = 0;
    for(int i=0;i<len;i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}

int largestOfArray(int arr[],int len){
    int largest = arr[0];
    for(int i=0;i<len;i++)
    {
        if(arr[i]>=largest){
            largest = arr[i];
        }
    }
    return largest;
}

int lengthOfArray(int arr[])
{
    return sizeof(arr)/sizeof(arr[0]);
}

int main(int argc, char const *argv[])
{
    int numbers[] = {55,56,66,88,90};
    int marks[] = {20,56,77,56,15,100};
    
    int length1 =sizeof(numbers)/sizeof(numbers[0]);
    int length2 = sizeof(marks)/sizeof(marks[0]);

    // printf("%d",length1);
    printArray(numbers,length1);
    printArray(marks,length2);
    int result = largestOfArray(marks,length2);
    printf("%d",result);
    
    return 0;
}
