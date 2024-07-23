#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no_of_terms ;
    printf("Enter number of terms you want to print :");
    scanf("%d",&no_of_terms);
    for(int i=1;i<=no_of_terms;i++)
    {
        printf("%d",i);
       
    } 
    return 0;
}
