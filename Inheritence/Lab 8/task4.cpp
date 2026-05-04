#include <iostream>
using namespace std;

//Parent Class
class Person {
public:
    void Talk() {
        cout << "I am talking." << endl;
    }
     void Walk() {
        cout << "I am walking." << endl;
    }
     void Eat() {
        cout << "I am eating." << endl;
    }
};

//THE CHILD CLASSES Math Teacher
class MathsTeacher : public Person {
public:
    void TeachMaths() {
        cout << "I am teaching algebra!" << endl;
    }
};
// Child Class Footballer
class Footballer : public Person {
public:
    void PlayFootball() {
        cout << "I am scoring a goal!" << endl;
    }
};
//Child Class Businessman
class Businessman : public Person {
public:
    void RunBusiness() {
        cout << "I am closing a big deal!" << endl;
    }
};

int main() {
    //Creat Maths Teacher Object
    MathsTeacher mrSmith;
    cout << "Maths Teacher actions: " << endl;
    mrSmith.Walk();  
    mrSmith.Eat();   
    mrSmith.TeachMaths(); 
    //Creat Footballer Object 
    cout << "\nFootballer actions: " << endl;
    Footballer messi;
    messi.Walk();          // Inherited
    messi.PlayFootball();  // Unique
    cout << "\nBusinessman actions: " << endl;
    
    // 1. Create the Businessman object
    Businessman bruceWayne; 
    bruceWayne.Walk(); 
    bruceWayne.Talk(); 
    bruceWayne.RunBusiness(); 
    
    return 0;
}