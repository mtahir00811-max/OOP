#include<iostream>
using namespace std;
class base{
protected:
int x;
public:
int display()
{
     cout<<" I am base class display function "<<endl;

}
};
class Derived : public base{
public:
int display()
{
 cout<<" I am Derived class display function " <<endl;
}
   
}; 

int main(){
    Derived object;
     object.base::display();
    object.display();
   
}