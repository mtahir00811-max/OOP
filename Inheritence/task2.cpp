#include<iostream>
using namespace std;
class base{
protected:
int a , b , c ,d ;
public:
//Default 
 base (){
a = b = c = d = 0;
cout<<"Base Default Construtor"<<endl;
 }
 //One Argument 
 base (int x){
a = b = c = d = x ;
cout <<"One Argument Constructor"<<endl;
 }
 //Two Argument 
 base (int x , int y){
    a = x ;
    b = y ;
    c = x + y;
    d = x - y;

 cout<<"Two Argument construtor"<<endl;
 }
void display(){
    cout << "I'm Base class function "<<endl;
}
~base(){
    cout<<"Called Destructor"<<endl;
}
};
class Derived : public base{
    public:
    Derived() : base() 
    {
       cout<<"Derived class Defaullt Constructor "<<endl;
    }
  Derived(int X) : base(X)
   {
     cout<<"Derived class  One Argument Constructor "<<endl;
  }
  Derived(int X ,int y) : base(X,y) {
    cout<<"Derived class two Argument Constructor "<<endl;
  }
  ~Derived (){
    cout<<"Call Derived Destructor"<<endl;
  }
};
int main()
{
    cout << "Derived Default Object "<<endl;
    Derived obj;

    cout<<"\n Derived One Argument Constructor"<<endl;
    Derived obj1(10);
 
    cout<<"\n Derived two Argument Constructor"<<endl;
    Derived obj2(10,20);

    cout<<"Calling Display Function"<<endl;
    obj2.display();
    return 0;

}