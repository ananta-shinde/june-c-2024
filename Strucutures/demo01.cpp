#include<stdio.h>

struct Student
{
    int rollNo;
    char* name;
    bool isActive;
    int contact;
};

struct Car{
    int model_number;
    char* brand_name;
    double price;

};



int main(int argc, char const *argv[])
{
    int num; // normal varialble
    int numbers[5]; // array
    Student s1,s2; // creating structure in memory
    Car c1;
    c1.brand_name = "honda";
    s1.rollNo = 20;
    s1.name = "Ananta";
    s1.isActive = true;
    s1.contact = 113131313131;

    s2.rollNo = 100;
    s2.name = "John";
    s2.isActive = false;

    printf("Name:%s, Roll no %d, IsActive : %d",s1.name,s2.rollNo,s1.isActive);

   

    return 0;
}
