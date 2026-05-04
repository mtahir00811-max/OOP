#include <iostream>
using namespace std;

// Abstract Base Class with pure virtual functions
class Counter {
public:
    virtual void click() = 0;     
    virtual int  get()   = 0;      
    virtual void set(int v) = 0;  

    virtual ~Counter() {}          
};

// Derived class 1: counts UP
class UpCounter : public Counter {
private:
    int count;
public:
    UpCounter() : count(0) {}

    void click() override {
        count++;
        cout << "[UpCounter] Clicked! Count = " << count << endl;
    }

    int get() override {
        return count;
    }

    void set(int v) override {
        count = v;
        cout << "[UpCounter] Value set to " << count << endl;
    }
};

// Derived class 2: counts DOWN
class DownCounter : public Counter {
private:
    int count;
public:
    DownCounter() : count(10) {}

    void click() override {
        count--;
        cout << "[DownCounter] Clicked! Count = " << count << endl;
    }

    int get() override {
        return count;
    }

    void set(int v) override {
        count = v;
        cout << "[DownCounter] Value set to " << count << endl;
    }
};

int main() {
    // Cannot instantiate abstract class directly:
    // Counter c;  // ❌ Error!

    UpCounter   uc;
    DownCounter dc;

    // Base class pointers (runtime polymorphism)
    Counter *ptr;

    // --- UpCounter Demo ---
    cout << "====== UpCounter ======" << endl;
    ptr = &uc;
    ptr->set(0);
    ptr->click();
    ptr->click();
    ptr->click();
    cout << "Final Value: " << ptr->get() << endl;

    // --- DownCounter Demo ---
    cout << "\n====== DownCounter ======" << endl;
    ptr = &dc;
    ptr->set(5);
    ptr->click();
    ptr->click();
    ptr->click();
    cout << "Final Value: " << ptr->get() << endl;

    return 0;
}