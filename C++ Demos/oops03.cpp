#include<iostream>
using namespace std;
class BaseClass{
    protected:
     int count;
    public:
    int getCount(){
        return count;
    }
    void setCount(int n){
        count = n;
    }

   friend class FriendClass;

};

class ChildClass:BaseClass{
   public:
   int getCount(){
       return count;
   }
   void setCount(int n){
        count =n;
   }
   
};

class IndirectClass{
    BaseClass* bp;
    public:
    void setBaseclass(BaseClass* ptr){
        bp = ptr;
    }
    BaseClass* getBaseclass(){
        return bp; 
    }
};

class FriendClass{
      public :
      int getCount(BaseClass* ptr){
           return ptr->count;
      }
};


int main(int argc, char const *argv[])
{
    // direct access
    BaseClass b1;
    b1.setCount(100);
    cout << b1.getCount() << endl;

    // access from child class
    ChildClass c1;
    c1.setCount(500);
    cout << c1.getCount() << endl;

    // indirect access by has a relation
    IndirectClass idc;
    idc.setBaseclass(&b1);
    cout << idc.getBaseclass()->getCount() << endl;

    // access through friend class
    FriendClass fc;
    cout << fc.getCount(&b1) << endl;

    return 0;
}
