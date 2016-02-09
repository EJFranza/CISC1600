#include <iostream>
#include <string>
using namespace std;
int main () 
{
	string username;
	cout << "Please input your name: ";
	cin >> username;


	int x;
	cout << "Please give me a number: ";
	cin >> x;
	
	double y;
	cout << "Please give me a decimal: ";
	cin >> y;

	cout << "Hi " << username << ", I've calculated that " << x << " + " << y << " = " << x+y << ", and " << x << " - " << y << " = " << x-y << endl;
	return 0;	
}
