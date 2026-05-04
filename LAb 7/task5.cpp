#include <iostream>
using namespace std;

// Forward declarations
class DB;
class DM;

class DM {
private:
    float meters;
    float centimeters;

public:
    DM() : meters(0), centimeters(0) {}
    DM(float m, float cm) : meters(m), centimeters(cm) {}

    void input() {
        cout << "Enter meters: ";
        cin >> meters;
        cout << "Enter centimeters: ";
        cin >> centimeters;
    }

    void display() {
        cout << meters << " meters and " << centimeters << " centimeters" << endl;
    }

    // Friend functions
    friend DM addToDM(DM& dm, DB& db);
    friend DB addToDB(DM& dm, DB& db);
};

class DB {
private:
    float feet;
    float inches;

public:
    DB() : feet(0), inches(0) {}
    DB(float f, float in) : feet(f), inches(in) {}

    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void display() {
        cout << feet << " feet and " << inches << " inches" << endl;
    }

    // Friend functions
    friend DM addToDM(DM& dm, DB& db);
    friend DB addToDB(DM& dm, DB& db);
};

/*-- Conversion Constants ------------------------------
 1 foot  = 0.3048 meters
 1 inch  = 2.54 centimeters
 1 meter = 3.28084 feet
 1 cm    = 0.393701 inches
 Friend function: adds DM + DB and returns result as DM*/
DM addToDM(DM& dm, DB& db) {
    // Convert DB (feet & inches) to meters & centimeters
    float totalMetersFromDB    = (db.feet * 0.3048) + (db.inches * 0.0254);
    float totalMetersFromDM    = dm.meters + (dm.centimeters / 100.0f);

    float totalMeters          = totalMetersFromDM + totalMetersFromDB;

    DM result;
    result.meters              = (int)totalMeters;
    result.centimeters         = (totalMeters - result.meters) * 100.0f;

    return result;
}

// Friend function: adds DM + DB and returns result as DB
DB addToDB(DM& dm, DB& db) {
    // Convert DM (meters & centimeters) to feet & inches
    float totalMeters          = dm.meters + (dm.centimeters / 100.0f);
    float totalFeetFromDM      = totalMeters * 3.28084f;
    float totalFeetFromDB      = db.feet + (db.inches / 12.0f);

    float totalFeet            = totalFeetFromDM + totalFeetFromDB;

    DB result;
    result.feet                = (int)totalFeet;
    result.inches              = (totalFeet - result.feet) * 12.0f;

    return result;
}

int main() {
    DM dmObj;
    DB dbObj;

    // Input for DM object
    cout << "==============================" << endl;
    cout << "  Enter Distance in DM (Metric)" << endl;
    cout << "==============================" << endl;
    dmObj.input();

    // Input for DB object
    cout << "\n==============================" << endl;
    cout << "  Enter Distance in DB (Imperial)" << endl;
    cout << "==============================" << endl;
    dbObj.input();

    // Display original values
    cout << "\n==============================" << endl;
    cout << "  Original Values" << endl;
    cout << "==============================" << endl;
    cout << "DM Object -> ";
    dmObj.display();
    cout << "DB Object -> ";
    dbObj.display();

    // Addition result as DM
    DM resultDM = addToDM(dmObj, dbObj);
    cout << "\n==============================" << endl;
    cout << "  Result in Meters & Centimeters" << endl;
    cout << "==============================" << endl;
    cout << "Sum     -> ";
    resultDM.display();

    // Addition result as DB
    DB resultDB = addToDB(dmObj, dbObj);
    cout << "\n==============================" << endl;
    cout << "  Result in Feet & Inches" << endl;
    cout << "==============================" << endl;
    cout << "Sum     -> ";
    resultDB.display();

    return 0;
}
