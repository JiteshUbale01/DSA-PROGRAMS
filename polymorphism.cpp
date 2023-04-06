#include<iostream>
using namespace std;
class Employee
{
protected:
    string Name;
    int Age;
public:
    virtual void work(){
        cout<<"I am doing my tasks"<<endl;
    }
    Employee(string name, int age){
        Name=name;
        Age=age;
    }
};
class Teacher: public Employee 
{
protected:
    string Subject;
public:
     void work(){
         cout<<Name<<" is teaching "<<Subject<<endl;
     }
    Teacher(string name, int age, string subject):Employee(name, age){
        Subject=subject;
    }
};
class Developer: public Employee{
    protected:
        string ProgrammingLanguage;
    public:
        void work(){
            cout<<Name<<" likes to code in "<<ProgrammingLanguage<<endl;
        }
        Developer(string name, int age, string programmingLanguage):Employee(name,age){
            ProgrammingLanguage=programmingLanguage;
        }
};

int main(){
    Teacher t=Teacher("will",23,"physics");
    t.work();
    Developer d=Developer("jitesh",20,"C++");
    d.work();
    return 0;
}

//polymorphism simply means executing one thing in many forms
//poly means many morph means forms