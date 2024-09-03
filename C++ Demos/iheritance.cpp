#include<iostream>
using namespace std;

class Teacher;
class Student;

class College{
    int id;
    int teacherCount = 0;
    string name;
    string email;
    string address;
    Teacher* teachers[20];
    Student* students[20];

    public:
    void setName(string n){
        name = n;
    }
    string getName(){
       return name;
    }

    void AddTeacher(Teacher* ptr)
    {
        teachers[teacherCount] = ptr;
        teacherCount++;
    }

    Teacher** getTeacherList(){
         return teachers;
    }
   
};
class Person{
    protected:
     int id;
    string name;
    string email;
    string password;
    string address;
};

class Teacher : Person{
    int salary;
    College* college;
    public:
    string getName(){
          return name;
    }
    void setName(string n){
          name = n;
    }

   
   
};

class Student : Person{
    int rollNo;
    College* college;
   
};

class Principal : Teacher{
    
};

int main(int argc, char const *argv[])
{
    College c;
    Teacher t;
    Student s;
    t.setName("Ananta");
    c.setName("MIT");
    c.AddTeacher(&t);
    return 0;
}


