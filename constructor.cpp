#include<iostream>
using namespace std;
class student
{
private:
    string Name;
    int Rollno;
    int Marks;
public:
    
    void hello(){
        cout<<"name:"<<Name<<endl;
        cout<<"rollno:"<<Rollno<<endl;
        cout<<"marks:"<<Marks<<endl;
    }
    student(string name, int rollno, int marks){
        Name=name;
        Rollno=rollno;
        Marks=marks;
    }
};
int main(){
    student s1=student("jitesh",21,69);
    s1.hello();
    return 0;
}

