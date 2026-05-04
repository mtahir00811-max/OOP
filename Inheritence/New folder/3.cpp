#include<iostream>
using namespace std;
class base{
    public:
    void display(){
        cout<<"Base class"<<endl;
    }
};
class Derived :  public base{
public:
void display(){
    cout<<"Derived Classs"<<endl;
}
};
int main (){
    Derived obj;
    obj.display()
}