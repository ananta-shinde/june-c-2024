#include<stdio.h>
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int* arr,int left,int right){
    int pivot = arr[right];
    int i = left-1;
    for(int j=left;j<=right;j++)
    {
        if(arr[j] < pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[right]);
    return i+1;

}

void quicksort(int* arr,int left,int right){
    
    if(left<right)
    {
       int pi = partition(arr,left,right);
       quicksort(arr,left,pi-1);
       quicksort(arr,pi+1,right);
    }
}
int main(int argc, char const *argv[])
{
    int numbers[]= {23,55,42,12,56,40};

    quicksort(numbers,0,5);
    
     // printing an array
    for(int i=0;i<6;i++)
    {
        printf("%d\t",numbers[i]);
    }
    return 0;
}
