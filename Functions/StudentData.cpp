#include<stdio.h>
struct Student
{
    int rollNo;
    char name[40];
    char email[25];
};


bool addStudent(Student list[],int* count_ptr)
    {
        Student s;
        int count = *count_ptr;
        printf("Enter roll No :");
        scanf("%d",&s.rollNo);
        printf("Enter name :");
        scanf("%s",&s.name);
        printf("Enter email :");
        scanf("%s",&s.email);
        if(count>0){
            return false;
        }else{
            list[count] = s;
            *count_ptr = *count_ptr +1 ;
            return true;
        }
    }


int main(int argc, char const *argv[])
{
    Student s1;
    Student list[5];
    int count = 0;

    bool result = addStudent(list,&count);
    if(result == true)
    {
        printf("strudent added successfully");
    }else{
        printf("somthing went wrong, please try again...");
    }

    result = addStudent(list,&count);
    if(result == true)
    {
        printf("strudent added successfully");
    }else{
        printf("somthing went wrong, please try again...");
    }

    printf("Name : %s, Roll No : %d,email : %s",list[0].name,list[0].rollNo,list[0].email);
    return 0;
}
