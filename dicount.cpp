#include<stdio.h>
int main(int argc, char const *argv[])
{
    float marks;
    printf("enter marks in % :");
    scanf("%f",&marks);

    if(marks >= 60){
        printf("you are eligible for 30 percent discount");
    }
    else if(marks >= 40 && marks< 60){
        printf("you are eligible for 20 percent discount");
    }
    else{
        printf("you are eligible for 5 percent discount");
    }   
    return 0;
}
