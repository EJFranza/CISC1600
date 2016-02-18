#include <iostream>
using namespace std;
int main ()
{
	int i= 1;
	double x= 0;
	double sum= 0;
	{
		for (; i <=3; i++)
		{
			cout << "Input "<< i << ": ";
			cin >> x;
			{	
				sum=x+sum;
			}
		}
		cout << "Sum of above numbers is: "<< sum << endl;
		return 0;
	}
}
