#include<iostream>
using namespace std;

class College{
    string name;
    string id;
    string email;
    string address;
};

class Student{
    int rollNo;
    string id;
    string name;
    string address;
    string email;
    public:
    int getRollNo(){
        return rollNo;
    }
    string getName(){
        return name;
    }
    void setRollNo(int roll){
        rollNo = roll;
    }
    void setName(string n){
        name = n;
    }
    void printStudent(){
        cout << getRollNo() <<" "<< getName();
    }

};

class StudentManager{
    Student list[100];
    int studentCount = 0;
    public:
    void addNewStudent(Student s){
           list[studentCount] = s;
           studentCount++;
    }
    Student* getStudentList(){
        return list;
    }
    void printStudentList(){
        for(int i=0;i<studentCount;i++)
        {
            list[i].printStudent();
        }
    }
};


int main(int argc, char const *argv[])
{
    Student s1;
    s1.setName("Ananta");
    s1.setRollNo(100);

    

    StudentManager sm;
    sm.addNewStudent(s1);

    sm.printStudentList();
    return 0;
}
