// 1
// 23
// 456
// 78910

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row=4,col=4,count = 1;

    for(int j=0;j<row;j++)
    {
        for(int i=0;i<col;i++)
        {
            if(i<=j)
            {
                printf("%d",count);
                count++;
            }
            
        }
        printf("\n");
    }
    return 0;
}
