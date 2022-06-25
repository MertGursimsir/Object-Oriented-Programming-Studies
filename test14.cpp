#include <iostream>
using namespace std;

void writeV(int k){
	if (k < 10) cout << k << endl;
	else{
		writeV(k/10);
		cout << k%10 << endl;
	}
}

int pow(int k, int n){
	if (n==0) return 1;
	return k * pow(k, n-1);
}

int main(){
	//writeV(12345);
	cout << pow(3,3) << endl;
	return 0;
}