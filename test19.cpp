#include <iostream>
#include <memory>
using namespace std;

template<typename T>
class unique_ptr{
private:
	T* p_;
public:
	unique_ptr(T* p) : p_(p) { }
	~unique_ptr() { delete p_; }
	T& operator*() {return *p_; }
	T* operator->() {return p_; }
	unique_ptr& operator++() {++p_; return *this; }    //pre-incr
private:
	unique_ptr(const unique_ptr& n);
	unique_ptr& operator=(const unique_ptr& n);


};

class obj{
public:
	void f() {cout << "obj func" << endl;}
};


int main(){
	shared_ptr<obj> p(new obj);
	p->f();
	//unique_ptr<obj> temp = new obj;
	//temp->f();
	return 0;
}
