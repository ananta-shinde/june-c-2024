// ******
// ******
// ******
// ******
// ******
// ******


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row;
    int col;
    printf("Enter no of rows:");
    scanf("%d",&row);
    printf("Enter no of cols:");
    scanf("%d",&col);
    for(int j=0;j<row;j++)
    {
        for(int i=0;i<col;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}
