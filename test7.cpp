#include <iostream>
using namespace std;

class dummyv2;

class dummy{
public:
	dummy() : x(1){}
	int x;
	int operator()(int number) const {return number+x;}
	void bos(dummyv2& temp);
};

class dummyv2{
public:
	int y;
	dummyv2() : y(29){}
	friend void dummy::bos(dummyv2& temp);
};

inline void dummy::bos(dummyv2& temp){cout << temp.y << endl;}

int main(){
	dummy var; 
	dummyv2 var2;
	var.bos(var2);
	return 0;
}