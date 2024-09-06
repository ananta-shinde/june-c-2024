#include<iostream>
using namespace std;
class College;
class Department;
class Student;
class Teacher;


class Person{
    int id;
    string name;
    string email;
    string password;
    string address;
     public:
    string getName(){
        return name;
    }
    void setName(string n){
        name = n;
    }

    void printDetails(){
        cout << name << ", " << email;
    }
};

class Teacher:public Person{
    float salary;
    Department* dept;
};
class Student:public Person{
    int rollNo;
    Department* dept;
};
class Department{
    int id;
    string name;
    // College* college;
    int stud_count = 0;
    Teacher* teachers[5];
    Student* students[5];

    public:
    string getName(){
        return name;
    }
    void setName(string n){
        name = n;
    }

     void addStudent(Student* ptr){
           students[stud_count] = ptr;
           stud_count++;
    }
     Student** getStudenList(){
           return students;
    }

    Student* getStudentByName(string name){
             for(int i=0;i<stud_count;i++){
                if(students[i]->getName() == name){
                    return students[i];
                }
                
             }
             return NULL;
    }
};

class College{
    int id ;
    string name;
    string address;
    int dept_count = 0;
    Department* departments[5];
    public:

    string getName(){
        return name;
    }
    void setName(string n){
        name = n;
    }

    void addDepartment(Department* ptr){
           departments[dept_count] = ptr;
           dept_count++;
    }

    Department** getDepartmentList(){
        return departments;
    }

    Department* getDepartmentByName(string name){
             for(int i=0;i<dept_count;i++){
                if(departments[i]->getName() == name){
                    return departments[i];
                }
                
             }
            
             return NULL;
    }

};





class Principal:Teacher{

};
int main(int argc, char const *argv[])
{
    // create college
    College c1;
    c1.setName("MIT");
    // create depatrments
    Department d1;
    d1.setName("MECH");

    Department d2;
    d2.setName("Computer");
    // assign department to college
    c1.addDepartment(&d1);
    c1.addDepartment(&d2);
    // create teacher
    Teacher t1;
    t1.setName("Ananta");
    // assign teacher to department
    // assign department teacher
    // create Student
    Student s1;
    s1.setName("Bhumika");

    Student s2;
    s2.setName("Vrushali");
    // assign Student to deparment
    // assign deparment studnet

    //Adding a student to department of college
    c1.getDepartmentByName("MECH")->addStudent(&s1);
    c1.getDepartmentByName("Computer")->addStudent(&s2);

    Department** d_list = c1.getDepartmentList();
    for(int i=0;i<2;i++){
       Student** s_list =  d_list[i]->getStudenList();
         for(int j=0;j<1;j++){
                s_list[i]->printDetails();
         }
    }

    return 0;
}
