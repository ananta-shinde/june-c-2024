// 1
// 1 2
// 1 2 3
// 1 2 3 4
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row = 4;
    int col = 4;
    for(int j=0;j<row;j++)
    {
        for(int i=0;i<col;i++)
        {
             if(i<=j)
             printf("%d",i+1);
        }
        printf("\n");
    }
    return 0;
}
