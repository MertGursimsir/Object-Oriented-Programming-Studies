#include <iostream>
#include <typeinfo>
using namespace std;

class Pet{
public:
	string name;
	virtual void print() const { cout << name << endl;}
};

class Dog : public Pet{
public:
	string breed;
	virtual void print() const { Pet::print(); cout << breed << endl;}
};


int main(){
	Pet *p1;
	Dog *d1;

	d1 = new Dog;
	d1->name = "sarı";
	d1->breed = "golden";
	d1->print();

	p1 = d1;
	d1 = (Dog*)p1;
	//p1.breed = "mert";
	p1->print();

	p1 = new Pet;
	Dog *d2 = dynamic_cast<Dog*> (p1);
	d2->name = "beyaz";
	d2->breed = "max";
	d2->print();


	//cout << typeid(d1).name() << endl;
	return 0;
}