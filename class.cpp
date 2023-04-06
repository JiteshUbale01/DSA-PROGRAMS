#include<iostream>
using namespace std;
class hello         //creating an class
{
private:  //private is an access specifier, values declared as private can be accessed within the class only
    int a=10;
public: //values,methods declared as public can be accessed from outside of class as well
    void show(int b){
        cout<<"values are:"<<" "<<a<<" "<<b;
    }
};

int main()
{
    hello h;        // h is an object for class hello
    h.show(20);     // using h we are calling show method from the class hello 
    return 0;
}
