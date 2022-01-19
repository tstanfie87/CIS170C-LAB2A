// ---------------------------------------------------------------
// Programming Assignment:	LAB2A
// Developer:			          Travis J. Stanfield
// Date Written:			11/5/2020
// Purpose:				Determine Smallest Number 
// ---------------------------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "\nLab2A Determine Smallest Number Program" << endl;
	cout << "\n";

	int num1 = 0;
	int num2 = 0;
	

	cout << "Please enter first number: ";
	cin >> num1;
	cout << "Please enter second number: ";
	cin >> num2;
	if (num1 < num2)
	{
		cout << num1 <<" is the lowest.";

	}
	else if (num2 < num1)
	{
		cout << num2 << " is the lowest.";
	}
	else
	{
		cout << "The numbers are equal."<<endl;
	}
}

	

	
















