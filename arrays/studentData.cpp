#include<stdio.h>
int main(int argc, char const *argv[])
{
   int marks[3][3][3];
   for(int z=0;z<3;z++){
     for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            printf("enter marks :");
            scanf("%d",&marks[z][j][i]);
        }
    }
   }  
    return 0;
}
