#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num ;
    printf("enter your choice :");
    scanf("%d",&num);
    if(num == 1){
        printf("This is first message\n");
    }
    
    if(num==2){
        printf("This is second message\n");
    }

    if(num == 3)
    {
        printf("This is third message\n");
    }
    else{
        printf("invalid choice");
    }
    
    return 0;
}
