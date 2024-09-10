#include<iostream>
using namespace std;

class BaseClass{
    protected:
    int count;
    public:
   
   virtual int getCount(){
        return count;
    }
    void setCount(int n){
        count = n;
    }
    // static : method overloading
    void printData(double data){
        cout << data << endl;
    }
    void printData(string data){
        cout << data << endl;
    }

    // static :  operator overloading
    BaseClass operator+(BaseClass& ptr){
        BaseClass b;
        b.count = count + ptr.count;
        return b;
    }
    BaseClass operator+(int n){
        BaseClass b;
        b.count = count + n;
        return b;
    }
    
};

class ChildClass:public BaseClass{
      public:
      // dynamic polymorphism : method overriding
      int getCount(){
         return count;
      }
      void setCount(int n){
         count = n;
      }

};



int main(int argc, char const *argv[])
{
    BaseClass b1,b2,b3;
    b1.setCount(10);
    b2.setCount(30);
    b1.printData(20);
    b3 = b1+b2;
    b3 = b1+50;
    cout << b3.getCount() << endl;

    ChildClass c1;
    c1.setCount(100);
    cout << c1.getCount() << endl;

    // ChildClass* ptr = &c1;
    BaseClass* ptr = &c1;
    // ChildClass* ptr = &b1;   not supported
    ptr = &b1;
    cout << ptr->getCount() << endl;
    return 0;
}
