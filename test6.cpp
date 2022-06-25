#include <iostream>
using namespace std;

class test{
public:
	test() : x(1) {}
	test(int xx) : x(xx) {}
	void nc() {cout << "non-const" << endl;}
	void nc() const {cout << "const" << endl;}
	const test operator+(const test& ls) const;
	int x;
};

const test test::operator+(const test& ls) const{
	return test(ls.x + x);
}

int main(){
	test p, r, c;
	c = p+r;
	c.nc();
	(p+r).nc();
	cout << c.x << endl;
}