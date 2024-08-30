#include<iostream>
using namespace std;

class Student{
    int rollNo = 100;
    public:
    float marks;
    int getRollNo(){
        return rollNo;
    }
    void setRollNo(int n){
         rollNo = n;
    }
};

int main(int argc, char const *argv[])
{
    Student s1;
    s1.setRollNo(250);
    cout << s1.getRollNo();
    s1.marks = 50;
    return 0;
}
