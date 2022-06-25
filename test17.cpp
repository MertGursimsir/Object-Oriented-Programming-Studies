#include <iostream>
using namespace std;

template<class T, class R>	
void swapValues(T& var1, R& var2){
	T temp;
	temp = var1;
	var1 = var2;
	var2 = temp;
}

int main(){
	int x = 1, y = 2;
	cout << "x:" << x << " | y:" << y << endl;
	swapValues(x,y);
	cout << "x:" << x << " | y:" << y << endl;
	return 0;
}