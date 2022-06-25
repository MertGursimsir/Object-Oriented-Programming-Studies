#include <iostream>
#include <string>
using namespace std;

float& f(float& num){
	float& temp = num;
	return temp;

	/*
	float x = num;
	float& temp = x;	
	return temp;


	s i cout ile yazdırırken yanlıs degerler verir
	çünkü yerel bi değişkene referans ediyosun ve o referansı döndürüyosn
	*/
}

float deger(float& ser){
	return ser+5;
}



int main(){
	float b = 4.;
	float& s = f(b);

	string str = "asdgaksfnl";
	string str2[] = {"a", "b", "adsfasfdas", "hehehehe"};

	cout << s << endl;
	cout << deger(b) << endl;

	f(b) = 42;
	cout << "function assignment b --> " << b << endl;

	return 0;
}