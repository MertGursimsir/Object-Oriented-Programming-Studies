#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int ternary();
void pointer(const int *ipa, const int *ipb);
void reference(int& ref);
int& reference2();
int* pointer2();
int* fun();
void array2(int a[]);
void array(const int* a);
void sort(int arr[], int size);

struct cda{
	double balance;
	double interestRate;
	int term;
};


int main(){
	/*
	string s1 = "Hello there Mert", delimeter = "he", token = s1.substr(0, s1.find(delimeter));
	cout << s1 << endl << token << endl << s1.find(delimeter);
	*/

	/*
	char ch1, ch2, ch3, ch4,ch5;
	ch1 = cin.peek();
	ch2 = cin.peek();
	cin.get(ch3);
	cin.putback('a');
	cin.get(ch4);
	cin.get(ch5);
	cout << ch1 << endl << ch2 << endl << ch3 << endl << ch4 << endl << ch5 << endl;
	*/


	/*
	string s = "(\n\t\n\t)";
	cout << s << endl;
	*/

	/*
	string str = "mert";
	str.insert(1, "mert", 2);
	cout << str << endl << str.capacity() << endl << str.max_size() <<  endl;
	*/

	/*
	vector<int> v;
	v.push_back(3);
	v.erase(v.begin()+0);
	cout << v.size() << endl;
	*/
	
	/*
	enum class mert{ahsen, nurdan, aytekin};
	mert aile;
	aile = mert::ahsen;
	if (aile == mert::ahsen) cout << "aile" << endl;
	*/


	/*
	int a = ternary();
	cout << a << endl;
	*/


	/*
	int first, second;
	first = (first = 2, second = first + 3);
	cout << first << endl << second << endl;
	*/

	/*
	fstream file;
	string str;
	file.open("set1.txt");
	getline(cin, str);
	cout << str;
	//getline(file,str);

	string de = " ", ne;
	ne = str.substr(0, str.find(de));

	cout << ne;
	*/

	/*
	int a = 4;
	pointer(&a);
	cout << a << endl;
	*/

	/*
	int r = 5;
	reference(r);
	cout << r << endl;
	*/

	/*
	int a = 4, b = 4;
	pointer(&a, &b);
	cout << a << endl;
	*/

	/*
	int a = 4;
	int b = 8;
	int& ref = a;
	ref = b;
	cout << a << endl << b << endl;
	*/

	/*
	int& ref = reference2();
	int* ip = pointer2();
	int a = 4;
	string s = "hello";
	cout << *ip << endl;
	cout << ref << endl;
	*/

	/*
	int* arr = fun();
	int a = 4;
	string s = "hello";
    cout << arr[2];
    */

	/*
	int arr[4] = {1,2,3,4};
	for (double i : arr)
		cout << i << endl;
	*/

	/*
	int arr[2] = {1,2};
	array(arr);
	array2(arr);
	for(int i : arr)
		cout << i << endl;
	*/

	/*
	int arr[] = {8,6,10,2,16,4,18,14,12,20};
	sort(arr, 10);
	for (int i : arr)
		cout << i << " ";
	cout << endl;
	*/

	/*
	cda a, b;
	a.balance = 1.0;
	a.interestRate = 2.;
	a.term = 3;
	b.balance = 4.;
	b.interestRate = 5.;
	b.term = 6;

	a = b;

	//cout << a.term << endl;
	a.term = 7;
	a.balance = 25;
	cout << b.balance << endl << a.balance << endl;
	cout << &a << endl << &b << endl;
	*/


	return 5;
}

void sort(int arr[], int size){
	int temp;
	for (int i = 0; i < size-1; ++i){
		for (int j = i+1; j < size; ++j){
			if (arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void array(const int* a){
	//a[0] = 42;
}

void array2(const int a[]){
	//a[1] = 42;
}

int* fun()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int *ptr = arr;
    return ptr;
}

int& reference2(){
	int a = 42;
	int& r = a;
	return r;
}

int* pointer2(){
	int a = 42;
	int* ip = &a;
	return ip;
}

void reference(int& ref){
	ref = 4;
}


void pointer(const int *ipa, const int *ipb){
	ipa = ipb;
	//*ipa = 4;
}

int ternary(){
	int x, y;
	x = 4;
	y = 5;
	return (x>y) ? x : y;
}