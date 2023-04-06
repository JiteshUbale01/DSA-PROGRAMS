#include<iostream>
using namespace std;
class student{
    private:
        string Name;
        int Rollno;
    public:
       void setName(string n){
            Name=n;
        }
        string getName(){
            return Name;
        }
        
        void setRollno(int roll){
            if(roll>=300)
            Rollno=roll;
        }
        int getRollno(){
            return Rollno;
        }
        void details(){
            cout<<"name:"<<Name<<endl;
            cout<<"rollno:"<<Rollno<<endl;
        }
        student(string name, int rollno){
            Name=name;
            Rollno=rollno;
        }
};
int main()
{
    student s1= student("jitesh",200);
    s1.details();

    student s2= student("abhijeet",890);
    s2.details();

    s1.setName("daya");
    cout<<"my name is:"<<s1.getName()<<" "<<endl<<"my rollno is:"<<s1.getRollno();
    return 0;
}
// default access specifier is private in c++