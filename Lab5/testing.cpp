#include "header.h"

int testing::count = 0;

testing::testing()
{
    a = 0;
}

void testing::incrementValues()
{
    a++;
    count++;
}

void testing::displayCount()
{
    cout << "Current value of shared count: " << count << endl;
}
