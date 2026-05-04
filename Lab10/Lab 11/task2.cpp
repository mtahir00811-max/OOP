#include <iostream>
#include <fstream> 
using namespace std;

class file_construction {
private:
    char name[50]; 
    int age;       

public:
    void getData() {
        cout << "Enter your name: ";
        cin.getline(name, 50); 
        cout << "Enter your age: ";
        cin >> age;
        ofstream outFile;
        outFile.open("data.doc");
        if (!outFile) {
            cout << "Oops! Could not create the document." << endl;
            return; 
        }
        outFile << "Name: " << name << endl;
        outFile << "Age: " << age << endl;
        outFile.close();
        cout << "--> Data successfully saved to data.doc!" << endl;
    }
    void display() {
        ifstream inFile;
        inFile.open("data.doc");
        if (!inFile) {
            cout << "Oops! Could not find the document to read." << endl;
            return;
        }
        cout << "\n--- Reading from Document ---\n";
        char line[100];
        while (inFile.getline(line, 100)) {
            cout << line << endl;
        }
        inFile.close();
    }
};

int main() {
    file_construction myFileApp;
    myFileApp.getData();   
    myFileApp.display();   

    return 0;
}