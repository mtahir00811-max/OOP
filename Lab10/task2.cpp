#include <iostream>
using namespace std;
class Duck {
protected:
    float weight;

public:
    Duck(float w = 0) {
        weight = w;
    }

    void setWeight(float w) {
        weight = w;
    }

    float getWeight() {
        return weight;
    }

    // Common behavior
    virtual void walk() = 0;    
    virtual void quack() = 0;   

    // Same logic for all ducks
    bool canFloat() {
        return weight <= 5.0; 
    }
};
class MallardDuck : public Duck {
public:
    MallardDuck(float w) : Duck(w) {}

    void walk() override {
        cout << "Mallard Duck is walking normally." << endl;
    }

    void quack() override {
        cout << "Mallard Duck says Quack Quack!" << endl;
    }

    void fly() {
        cout << "Mallard Duck can fly!" << endl;
    }
};
class RubberDuck : public Duck {
public:
    RubberDuck(float w) : Duck(w) {}

    void walk() override {
        cout << "Rubber Duck cannot walk. It just bounces!" << endl;
    }

    void quack() override {
        cout << "Rubber Duck squeaks (fake quack)!" << endl;
    }
};
int main() {
    MallardDuck m(3.2);
    RubberDuck r(2.0);

    cout << "=== Mallard Duck ===" << endl;
    m.walk();
    m.quack();
    m.fly();
    cout << "Can float? " << (m.canFloat() ? "Yes" : "No") << endl;

    cout << "\n=== Rubber Duck ===" << endl;
    r.walk();
    r.quack();
    cout << "Can float? " << (r.canFloat() ? "Yes" : "No") << endl;

    return 0;
}