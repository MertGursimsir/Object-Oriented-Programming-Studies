#include <iostream>

//void f(){ std::cout << 1 << std::endl;}

namespace s1{
	void f() {std::cout << 2 << std::endl;}
}

namespace s2{
	void f() {std::cout << 3 << std::endl;}
}

namespace{
	void f() {std::cout << 4 << std::endl;}
}

int main(){
	using namespace s2;
	f();
	return 0;
}