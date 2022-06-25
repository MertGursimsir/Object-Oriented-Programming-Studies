#include <iostream>
#include <typeinfo>
using namespace std;

int f(const int temp){
	return temp;
}

int main(){
	int *p1, *p2;
	p1 = new int;
	*p1 = 42;
	p2 = p1;
	int &i = *p1;
	delete p1;
	cout << i;

	int a = 7;
	cout << f(a) << endl;

	return 0;
}