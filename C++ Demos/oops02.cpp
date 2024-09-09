#include<iostream>
using namespace std;
class FriendClass;
class MainClass{
    friend class FriendClass;
    protected:
    int count = 20;
    public:
    int getCount(){
        return count;
    }

};

class IndirectClass{
    MainClass* m;
    public:
    void setMainClass(MainClass* ptr){
        m = ptr;
    }
    MainClass* getMainClass(){
          return m;
    }
};

class ChildClass : MainClass{
    public:
    int getCount(){
        return count;
    }
};

class FriendClass{
      public:
     int getCount(MainClass* m){
          return m->count;
      }
};

int main(int argc, char const *argv[])
{
    // access through reference of same class
    MainClass m1;
    cout <<"value from mainclass:" << m1.getCount() <<endl;

    // access through reference of child class
    ChildClass c1;
    cout <<"value from child class:" << c1.getCount() << endl;


    // indirect access through has a relation
    IndirectClass i;
    i.setMainClass(&m1);
    MainClass* ptr = i.getMainClass();
    cout <<"value from indirectclass:" << ptr->getCount() << endl;

    FriendClass f;
    cout <<"value from firend class:" << f.getCount(&m1) << endl;
    

    return 0;
}

