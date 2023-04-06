#include<iostream>
using namespace std;
class AbstractStudent{
    virtual void addGrades()=0;
};
class Student:AbstractStudent{
    private:
        string Name;
        int Rollno;
        int Marks;
    public:
        void details(){
            cout<<"name:"<<Name<<endl;
            cout<<"rollno:"<<Rollno<<endl;
            cout<<"marks:"<<Marks<<endl;
        }
        Student(string name, int rollno, int marks){
            Name=name;
            Rollno=rollno;
            Marks=marks;
        }
        void addGrades(){
            if(Marks<30){
                cout<<Name <<" marks will be added!!"<<endl;
            }
            else{
                cout<<Name<<" marks cannot be added for you better luck next time";
            }
        }
};
int main()
{
    Student s1= Student("jitesh",300,69);
    s1.details();
    s1.addGrades();
    Student s2=Student("ganesh",934,23);
    s2.details();
    s2.addGrades();
    return 0;
}
