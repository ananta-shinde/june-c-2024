#include<iostream>
using namespace std;
class Student{
    int rollNo;
    float marks;
    public:
    int getRollNo(){
        return rollNo;
    }
    // Student(){
    //     rollNo = 100;
    // }
    Student(int n){
        rollNo = n;
    }

};
class Teacher{
    int id;
    double salary;
};
int main(int argc, char const *argv[])
{
    Teacher t1;
    Student  s1(101),s2(101),s3(103);
    cout << s1.getRollNo()<< endl;
    cout << s2.getRollNo();
    return 0;
}
