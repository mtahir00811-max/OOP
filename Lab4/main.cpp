#include <iostream>
#include"header.h"
using namespace std;
int main() {
	
	testing Normal_obj;
	Normal_obj.constant();
	Normal_obj.non_constant();
	//call Constant Function
	const testing constant_obj;
	constant_obj.constant();

	
}
