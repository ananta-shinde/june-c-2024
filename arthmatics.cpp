#include<stdio.h>
int main(int argc, char const *argv[])
{
    // datatype identifier = value
    int num = 20; // initialization of variable
    int marks; // declaration
    num = 40; // updation
    // num = "A"; // not allowed
    num = num + 10;
    marks = num*10;
    printf("%d\n",num);
    printf("%d\n",marks);
    printf("%d",num);
    return 0;
}
