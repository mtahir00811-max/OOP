#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ── Class Definition ──────────────────────────────────────────────────────────

class outfile {
private:
    string file_name;

public:
    // Constructor method — initializes the file name
    outfile(string fname) {
        file_name = fname;
    }

    // Write name and age to the file
    void write(string name, int age) {
        ofstream fout(file_name);   // open file for writing
        if (!fout) {
            cout << "Error: Could not open file for writing!" << endl;
            return;
        }
        fout << "Name: " << name << endl;
        fout << "Age : " << age  << endl;
        fout.close();
        cout << "Data written to '" << file_name << "' successfully." << endl;
    }

    // Read name and age from the file
    void read() {
        ifstream fin(file_name);    // open file for reading
        if (!fin) {
            cout << "Error: Could not open file for reading!" << endl;
            return;
        }
        string line;
        cout << "\nReading from '" << file_name << "':" << endl;
        cout << "----------------------------" << endl;
        while (getline(fin, line)) {
            cout << line << endl;
        }
        cout << "----------------------------" << endl;
        fin.close();
    }
};

// ── Main Program ──────────────────────────────────────────────────────────────

int main() {
    string name;
    int    age;

    // Get user input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age : ";
    cin  >> age;

    // Construct outfile object with the desired file name
    outfile file("user_data.txt");

    // Write name and age to the file
    file.write(name, age);

    // Read the data back from the file
    file.read();

    return 0;
}