#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 20;
    char symbol = 'A';
    char name[10] = {'A','B','C','D'};
    char *city = "pune";
    city  ="New York";
    char *ptr;
    ptr = city;
    ptr = "New York";
    printf("%c",city[0]);
    return 0;
}
