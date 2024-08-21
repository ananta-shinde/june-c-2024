int sumOfArray(int arr[],int size){
     int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int findValueInArray(int arr[],int size,int searchValue)
{
    int result = -1;
    for(int i=0;i<size;i++)
    {
        if(arr[i] == searchValue){
            result = arr[i];
        }
    }
    return result;
}