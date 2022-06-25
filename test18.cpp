#include <iostream>
using namespace std;

template<class T>
class test{
public:
	//test() : x(T()) {}
	test(T xx) : x(xx) {}
	T x;
};

int main(){
	test<int>* temp = new test<int>[3];
	for (int i = 0; i < 3; ++i) cout << temp[i].x << endl;
	return 0;
}