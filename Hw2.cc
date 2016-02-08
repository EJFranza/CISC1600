#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string x;
	cout << "Please input your name: ";
	//cin >> x;
	getline(cin, x);

	cout << "I know your name is " << x << "." << endl;
	return 0;
}
