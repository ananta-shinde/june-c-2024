#include<stdio.h>
struct Student{
    int rollNo;
    char name[40];
};
int main(int argc, char const *argv[])
{
    Student student_list[5];
    for(int i=0;i<2;i++)
    {
        printf("enter name :");
        fgets(student_list[i].name, 40, stdin);
        printf("enter roll no :");
        scanf("%d",&student_list[i].rollNo) ;
        printf("\n");   
        
    }

   
   for(int i=0;i<2;i++)
    {
        printf("Rollno : %d\t",student_list[i].rollNo);
        printf("Name : %s\t",student_list[i].name);
        printf("\n");
    }

    return 0;
}
