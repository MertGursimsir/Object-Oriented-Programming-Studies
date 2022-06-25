#include <iostream>
#include <string>
#include <vector>
using namespace std;

class op{
public:
	op(int xx, int yy) : x(xx), y(yy){}
	op() : x(0), y(0){}
	int gx()const{return x;}	//----> GETTER X
	int gy()const{return y;}	//----> GETTER Y
	void aimless() { cout << "non-const func" << endl; }
	
	/*
	//FIRST + OPERATOR
	const op& operator+(const op& other)  const{
		op* temp = new op(gx()+other.gx(), gy()+other.gy());
		return *temp;
	}
	*/
	
	/*
	//SECOND + OPERATOR
	const op operator+(const op& other) const{
		return op(gx()+other.gx(), gy()+other.gy());
	}
	*/

	
	//THIRD + OPERATOR
	const op& operator+(const op& other) const{
		op temp(  gx()+other.gx(),   gy()+other.gy()  );
		op& ref = temp;
		return ref;
	}
	
	
private:
	int x;
	int y;
};

int main(){
	op s1(1,1), s2(2,2), s3 = s1 + s2;
	const op& s4 = s1+s2;
	vector<op> vec(5);
	vec[0] = s1 + s2;

	//(s1+s2).aimless();
	//s4.aimless();

	//string s[] = {"SOME", "AIMLESS", "STRING", "ARRAY"};
	//int a,b,c,d,e,f,g,h,j,r;	//aimless integers take place in stack

	cout << s1.gx() << " , " << s1.gy() << endl;
	cout << s2.gx() << " , " << s2.gy() << endl;
	cout << s3.gx() << " , " << s3.gy() << endl;
	cout << s4.gx() << " , " << s4.gy() << endl;
	cout << vec[0].gx() << " , " << vec[0].gy() << endl;
	cout << vec[1].gx() << " , " << vec[1].gy() << endl;

	return 0;
}