#include <iostream>
#include <string>
using namespace std;

// Base class
class publication {
protected:
    string title;
    float price;

public:
    void getdata() {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
    }

    void putdata() const {
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
    }
};

// Derived class: book
class book : public publication {
private:
    int pageCount;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void putdata() const {
        cout << "\n--- Book Details ---" << endl;
        publication::putdata();
        cout << "Pages : " << pageCount << endl;
    }
};

// Derived class: tape
class tape : public publication {
private:
    float playingTime;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter playing time (in minutes): ";
        cin >> playingTime;
    }

    void putdata() const {
        cout << "\n--- Tape Details ---" << endl;
        publication::putdata();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

// Main function
int main() {
    book b;
    tape t;

    cout << "=== Enter Book Information ===" << endl;
    b.getdata();

    cout << "\n=== Enter Tape Information ===" << endl;
    t.getdata();

    cout << "\n===== Publication Records =====" << endl;
    b.putdata();
    t.putdata();

    return 0;
}