#include<stdio.h>

struct Student{
      int rollNo;
      char name[40];
      int marks[3];
};
int main(int argc, char const *argv[])
{
    Student student_list[3];
     printf("enter roll No:");
    scanf("%d",&student_list[0].rollNo);
    printf("enter roll name:");
    scanf("%s",student_list[0].name);
    printf("Roll no for %s is :%d",student_list[0].name,student_list[0].rollNo);
    return 0;
}
