#include<iostream>
#include "header.h"
using namespace std;
int main()
{
    testing obj;

    obj.incrementValues();
    obj.incrementValues();
    obj.incrementValues();

    testing::displayCount();

    return 0;
}

