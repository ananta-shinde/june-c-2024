#include<iostream>
using namespace std;

class MainClass{
    int count;
    public:
    virtual void showMessage(){
        cout << "Message from MainClass"<< endl;
    }
    void setCount(int n){
        count = n;
    }
    int getCount(){
        return count;
    }
    // method overloading
    void printData(int n){
        cout <<"Integer function:" << n << endl;
    }
    void printData(string n){
        cout <<"String function:" << n << endl;
    }

    // operator overloading
    MainClass operator+(MainClass& m){
           MainClass newMain;
           newMain.count = count + m.count;
           return newMain;
    }

};

class ChildClass:public MainClass{
 public:
 // method overriding
  void showMessage(){
        cout << "Message from ChildClass"<< endl;
    }
};



int main(int argc, char const *argv[])
{
    MainClass m1,m2,m3;
    m1.setCount(30);
    m2.setCount(40);
    m1.printData(20);
    m2.printData("20");
    m3 = m1+m2;
    cout << m3.getCount() << endl;

    ChildClass c1;
    c1.showMessage();

    MainClass* ptr = &m3;
    ChildClass* ptr1 = &c1;
    MainClass* ptr2 = &c1;
    ptr2 = &m2;
    // ChildClass* ptr1 = &m3;
    // ptr2->setCount(m3.getCount());
    cout << ptr2->getCount() << endl;
    return 0;
}
