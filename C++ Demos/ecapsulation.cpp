#include<iostream>
using namespace std;

class Student{
      int rollNo;
      string name;
      string address;
      string email;
      string password;
      
      public:
      int getRollNo(){
        return rollNo;
      }
      int setRollNo(int n){
        rollNo = n;
      }
      string getName()
      {
        return name;
      }
      void setName(string n)
      {
        name = n;
      }
};

class College{
     int id;
     string name;
    public:
    
    string address;
    string contact;

    int getId()
    {
        return id;
    }
    void setName(string n)
    {
        name= n;
    }
    string getName(string n)
    {
        return name;
    }
};


int main(int argc, char const *argv[])
{
    Student s;
    College c1;

    return 0;
}
