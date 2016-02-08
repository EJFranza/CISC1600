// cin with strings
#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string username;
	cout << "Enter your name: ";
	cin >> username;
	
	string userage;
	cout<< "Enter your age: ";
	cin >> userage;

	string userthing;
	cout<< "Enter your favorite thing: ";
	cin >> userthing;

	cout << "Hi, my name is " << username << "." << " I am " << userage << " years old and my favorite thing is " << userthing << "." << endl;
	return 0;
}
