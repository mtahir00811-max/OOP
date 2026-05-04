#include<iostream>
using namespace std;

class test{
	private:
	int len;
	int width;
	public:
		test(int l,int w){
			len = l;
			width = w;
		}
	void display(){
		cout <<"Length is "<<len<<endl;
		cout <<"Width is " <<width<<endl;
	}
	int getArea() const{
	return len*width;
 	}
};
