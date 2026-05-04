#include "Robot.h"

int Robot::objectCount = 0;

Robot::Robot() {
    objectCount++;
}

void Robot::displayTotalRobots() {
    cout << "Total objects created so far: " << objectCount << endl;
}
