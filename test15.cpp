#include <iostream>
using namespace std;

class base{
public:
	void f() const {cout << "base class's function.\n";}
	virtual double area() const {return 0;};
	static void f2() {cout << "base class's static function.\n";}
};

class derived : public base{
public:
	void f(int y) const {cout << "derived class's function\n";}
	virtual double area() const override {return 1;};
};

void func(const base* const temp){
	cout << temp->area();
	//if area was not virtual, then this would definitely call base class's area
}

int main(){
	derived c1;
	base c2;
	
	//c1.f2();
	//cout << c2.area() << endl << c1.area() << endl;

	func(&c1);

	//cout << "\n\n" << sizeof(c2) << endl;

	return 0;
}