#include<iostream>
using namespace std;
class Car
{
protected:
    string Model;
    string Color;
public:
    void details(){
        cout<<"model:"<<Model<<endl;
        cout<<"color:"<<Color<<endl;
    }
    Car(string model,string color){
        Model=model;
        Color=color;
    }
};
class Mercedes: public Car
{
private:
    string Feul;
public:
    void conventional(){
        cout<<"feul is:"<<Feul<<endl;
        cout<<"model is:"<<Model<<endl;
        cout<<"color is:"<<Color<<endl;
    }
    Mercedes(string model, string color,string feul):Car(model, color){
        Feul=feul;
    }
};

class Tesla: public Car{
private:
    string Charge;
public:
    void electric(){
        cout<<"Charge:"<<Charge<<endl;
        cout<<"model is:"<<Model<<endl;
        cout<<"color is:"<<Color<<endl;
    }
    Tesla(string model, string color, string charge):Car(model, color){
        Charge=charge;
    }
};

int main()
{
    Mercedes gls=Mercedes("gls","silver","diesel");
    gls.conventional();
    Tesla mods=Tesla("model S","blue","electric");
    mods.electric();
    return 0;
}
