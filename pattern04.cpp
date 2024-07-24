// 1
// 22
// 333
// 4444

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row=4,col=4;
    for(int j=0;j<row;j++)
    {
        for(int i=0;i<col;i++)
        {
            if(i<=j)
            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}
