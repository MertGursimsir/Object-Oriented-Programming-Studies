#include <iostream>
#include <string>
using namespace std;

void printReference(const string& str){ cout << str << " lvalue\n"; }  
void printReference(string&& str) { cout << str << " rvalue\n"; }           

int main(){
	string m("mert");
	printReference("mert");

	return 0;
}