#include <iostream>
#include <string>
using namespace std;

class money{
public:
	money() : tl(10){}
	money(int lira) : tl(lira){}
	const money operator+(const money&) const;
	int output() const {return tl;}
	const int& f() const{const int& ref = tl; return ref;}
					  //{return tl;}
private:
	int tl;
};

/*
const money& money::operator+(const money& ls) const{
	money temp = money(ls.tl + tl);
	money& ref = temp;
	return ref;
}
*/

const money money::operator+(const money& ls) const {
	return money(ls.tl + tl);
}


int main(){
	money test1, test2;
	cout << (test2+1).output() << endl;

	//int& ref = test1.f();
	cout << test1.f() << endl;

	money test3 = test1+test2;
	string a[] = {"asd", "123", "asdf", "mert", "wert"};
	cout << test3.output() << endl;

	return 0;
}
