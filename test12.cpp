#include <iostream>
using namespace std;

class test{
public:
	test(int xx) : x(xx) {} 
	test(const test& other) {x = other.x;}
	//if there's no const, you cant copy const objects

	friend ostream& operator<<(ostream& out, const test& pr){
		out << pr.x << endl;
		return out;
	}

	const test& operator=(const test& other) {x = other.x; return other;}

	int x;
};

void f(test obj){
	cout << obj;
}

int main(){
	test temp(42);
	test another(temp);
	const test c1(20);

	(another = another) = temp;

	f(c1);
	f(another);

	return 0;
}