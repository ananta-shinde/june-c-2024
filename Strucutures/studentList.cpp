#include<stdio.h>
#include<stdlib.h>
struct Student{
    int rollNo = 0;
    char* name;
    char* college;
    float marks;
};
int main(int argc, char const *argv[])
{
    Student* list;
    int count = 0;
    printf("enter no of student you want to add :");
    scanf("%d",count);

    list = (Student *)calloc(count,sizeof(Student));

   for(int i=0;i<count;i++)
   {
        scanf("%d",&list[i].rollNo ) ;
        scanf("%s",list[i].name);
        scanf("%s",list[i].college);
        scanf("%f",&list[i].marks ) ;
   }
   
    return 0;
}
