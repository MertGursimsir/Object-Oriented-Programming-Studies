#include <iostream>
using namespace std;

class box{
public:
	box(char l) : waiter(l) {}
	char output(){ return waiter;}
	void serve();
	static int getTurn();
	static void incTurn();

private:
	char waiter;
	static int turn;
	static int serv;

};

int box::turn = 0;
int box::serv = 0;
inline void box::serve(){
	serv++;
	cout << "\nServer " << output() << " is now serving " << serv << endl;
}

int box::getTurn(){
	return turn;
}
void box::incTurn(){
	turn++;
}

int main(){
	int input;
	box s1('a'), s2('b');

	while(true){
		cout << "How many in your group?";
		cin >> input;
		cout << "Your turns are: ";
		for(int i = 0; i < input; ++i){
			box::incTurn();
			cout << box::getTurn() << " ";
		}
		s1.serve(); 
		s2.serve();
	}


	

	return 0;
}