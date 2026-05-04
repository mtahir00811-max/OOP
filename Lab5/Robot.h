#include <iostream>
using namespace std;

class Robot {
private:
    static int objectCount;

public:
    Robot();
    static void displayTotalRobots();
};


