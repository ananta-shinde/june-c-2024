#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[] = {55,420,16,18,11};
    
    for(int j=0;j<4;j++){
        int smallest = numbers[j];
        int smallestindex = j;
        for(int i=j;i<5;i++)
        {
            if(numbers[i]<smallest)
            {
                smallest = numbers[i];
                smallestindex = i;
            } 
        }
        //exchange
            int temp = numbers[j];
            numbers[j] = numbers[smallestindex];
            numbers[smallestindex] = temp;
    }
   // printing an array
    for(int i=0;i<5;i++)
    {
        printf("%d\t",numbers[i]);
    }
   
}
