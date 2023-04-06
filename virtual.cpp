#include<iostream>
using namespace std;
class Base
{
public:
    virtual void show(){
        cout<<"welcome ";
    }     
};

class Derived: public Base
{
public:
    void show(){
        cout<<"hello ";
    }
};
int main()
{
    Base *bptr;
    Base bob;
    Derived der;
    bptr=&der;
    bptr->show();
    return 0;
}
by using virtual function 

