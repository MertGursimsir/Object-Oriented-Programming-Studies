#include <iostream>
using namespace std;

int f(){
	static int k = 0;
	k++;
	return k;
}


class DayOfYear{
public:
	DayOfYear(int monthValue, int dayValue);
	DayOfYear(int monthValue);
	DayOfYear();

	void output()  {cout << day << "/" << month << endl; }
	void input(int d, int m) {day = d; month = m;}

	int month;
	int day;
};

DayOfYear::DayOfYear(int monthValue, int dayValue) : month(monthValue), day(dayValue) {}
DayOfYear::DayOfYear(int monthValue) : month(monthValue), day(1) {}
DayOfYear::DayOfYear() :month(1), day(1) {}

int main(){
	const DayOfYear* as = new DayOfYear[3];
	//as[0].output();

	int a = f();

	cout << f() << endl << f() << endl << a << endl;
	
	return 0;
}