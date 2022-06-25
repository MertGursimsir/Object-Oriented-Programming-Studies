#include <iostream>
#include <vector>
using namespace std;

int main( )
{
    vector<int> container;

    for (int i = 1; i <= 4; i++)
        container.push_back(i);

    cout << "Here is what is in the container:\n";

    for (auto p = container.begin( ); p != container.end( ); p++)
        cout << *p << " ";
    cout << endl;

    cout << "Setting entries to 0:\n";
    for (auto p = container.begin( ); p != container.end( ); p++)
         *p = 0;
    cout << "Container now contains:\n";
 
    for (auto p = container.begin( ); p != container.end( ); p++)
        cout << *p << " ";
    cout << endl;

    return 0;
}
