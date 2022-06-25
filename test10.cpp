#include <iostream>
using namespace std;

class stream{
public:
	stream() : x(0){}
	stream(int y) : x(y) {}

	friend ostream& operator<<(ostream& ost, const stream& s);

	const stream& operator=(const stream& other){ x = other.x; return other; }
	
	stream& operator++() {++x; return *this;}

	const stream& operator++(int) {stream& temp = *this; ++x; return temp;}
	//bu prefix olmazz çünkü zaten kendimize referans ediyoz


private:
	int x;
};

ostream& operator<<(ostream& ost, const stream& s){
	ost << s.x << endl;
	return ost;
}

int main(){
	stream s, other(6), veryother(12);
	cout << s << s;

	s = other = veryother;
	cout << ++s << s++ << s;

	return 0;
}