#include <iostream>
using namespace std;
int main ()
{
	int number = 0;
	int y = 5;
 
	cout << "Let's play a game! I am thinking of a number. Try to guess it!"<< endl;
	cin >> number;
	while (number != y)
	{
		if ( number < y )
		{
			cout<< "Oops, too small! Guess again: "<< number << endl;
			cin >> number;
		}		
		else if (number > y )
		{
			cout << "Oops, too big! Guess again: " << number << endl;
			cin >> number;
		}
	}
		cout << "Bingo! The number you guessed is correct." << endl;
	return 0;
}
