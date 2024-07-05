#include<stdio.h>
int main(int argc, char const *argv[])
{
    float marks;
    printf("Enter your marks :");
    scanf("%f",&marks);
    if(marks >=80){
        printf("you are passed, with A+");
    }else if(marks >=70 && marks<80){
        printf("you are passed, with A");
    }else if(marks>=60 && marks<70){
        printf("you are passed, with B");
    }else if(marks>=35 && marks<60)
    {
        printf("you are passed, with C");
    }else{
         printf("you are Failed");
    }
    
    
    
    
   

    return 0;
}
