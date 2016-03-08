#include <iostream>
#include <string>
using namespace std;

int addition (int x,int y)
{
	int add;
	add = x+y;
	return add;	
}
int subtraction(int x, int y)
{
	int sub;
	sub = x-y;
	return sub;
}
int factorial (int x)
{
	int fact=1;
	while(x>1)
	{
		fact *= x;
		x = x-1;
	}
	return fact;	
}
int anotherfactorial (int y)
{
	int afact=1;
	while(y>1)
	{
		afact *= y;
		y = y-1;
	}
	return afact;
}
int main ()
{
	int x = 0;
	int y = 0;
	cout << "Please input value for x: ";
	cin >> x;
	cout << "Please input value for y: ";
	cin >> y;
	
	int operation = 1;
	while ( operation != 0)
	{
		cout << "Choose one: " << endl;
		cout << "1) Print x+y" << endl;
		cout << "2) Print x-y" << endl;
		cout << "3) Print x!" << endl;
		cout << "4) print y!" << endl;
		cout << "0) Exit program" << endl;
		cout << " : ";
		cin >> operation;
		int output;
		if(operation == 1)
		{
			output = addition(x,y);
		}
		else if(operation == 2)
		{
			output = subtraction(x,y);
		}	
		else if (operation == 3)
		{
			output = factorial(x);
		}
		else if (operation == 4)
		{
			output = anotherfactorial(y);
		}
		else
		{
			break;
		}
		cout << output << endl;	
	}
return 0;
}
