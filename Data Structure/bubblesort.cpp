#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[] = {55,42,16,18,11};
     for(int j=0;j<4;j++){
         // logic for single pass
        for(int i=0;i<4;i++){
            if(numbers[i] > numbers[i+1]){
                int temp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;
            } 
        }
     }
       
    // printing an array
    for(int i=0;i<5;i++)
    {
        printf("%d\t",numbers[i]);
    }
    return 0;
}
