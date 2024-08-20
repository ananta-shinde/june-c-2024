#include<stdio.h>
#include"common.h"
 

int largest(int n1,int n2,int n3)
{
     if(n1>n2 && n1>n3)
     {
        return n1;
     }
     else if(n2>n1 && n2>n3){
        return n2;
     }else{
        return n3;
     }
};
int main(int argc, char const *argv[])
{
    int result = 0;
    result = sum(120,50);
    printf("%d\n",result);
    result = largest(120,50,200);
    printf("%d\n",result);
    result = largest(520,50,200);


    printf("%d",result);

    return 0;
}
