#include <iostream>
using namespace std;

class base
{
    protected:

     int a;
     int b;

     public:
     void display1(){
        a=10;
        b=30;
        cout<<"I am base class display function” & “I am derived class display function"<<endl;
        cout<< "a = "<<a<<" "<<"b = "<<b<<endl;
     }
};
class derived : public base
{
    public:
    void display3(){
        a=100;
        b=40;
        cout<<"I am base class display function” & “I am derived class display function"<<endl;
        cout<< "a = "<<a<<" "<<"b = "<<b<<endl;
     }
     
};

int main(){
    derived obj;
    obj.display1();
    obj.display3();

}