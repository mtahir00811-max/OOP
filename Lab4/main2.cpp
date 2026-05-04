#include <iostream>
#include"header2.h"
using namespace std;

int main() {
	test rectangle(10,5);
	rectangle.display();
	rectangle.getArea();
	// the below i created an extra box(int totalArea) for storing Answer.
	int totalArea =rectangle.getArea();
	cout<<"The area is "<<rectangle.getArea()<<endl;
	cout<<"The total area is "<<totalArea<<endl;
	
	return 0;
}
