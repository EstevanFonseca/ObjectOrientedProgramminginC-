#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
	// ex3_1.cpp
	// displays multiples of a number

	unsigned long n;

	cout << "Enter a number:";
	cin >> n;

	for (int j = 1;j <= 200;j++)
	{
		cout << setw(5) << j * n << " ";
		if (j % 10 == 0)
		{
			cout << endl;
		}
	}
	
	// ex3_2.cpp
	// converts fahrenheit to centigrad, or
	// centigrad to fahrenheit

	int response;
	double temper;

	cout << "Type 1 to convert Fahrenheit to Celsius,\n2 to convert Celsius to Fahrenheit : ";
	cin >> response;

	if (response == 1)
	{
		cout << "Enter temperature in fahrenheit : ";
		cin >> temper;
		cout << "In celsius that’s " << 5.0 / 9.0 * (temper - 32.0);
	}
	else
	{
		cout << "Enter temperature in celsius : ";
		cin >> temper;
		cout << "In fahrenheit that’s " << 9.0 / 5.0 * temper + 32.0;
	}
	cout << endl;

	
	// ex3_3.cpp
	// makes a number out of digits

	char ch;
	unsigned long total = 0; //this holds the number
	cout << "\nEnter a number : ";
	while ((ch = _getch()) != '\r') //quit on Enter
		total = total * 10 + ch - '0'; //add digit to total*10
	cout << "\nNumber is : " << total << endl;
	return 0;

	// ex3_4.cpp
	// models four-function calculator
	int n1, n2, ans;
	char oper, ch;

	do
	{
		cout << "Enter first number, operator, second number:";
		cin >> n1 >> oper >> n2;

		switch (oper)
		{
		case '+': ans = n1 + n2; break;
		case '-': ans = n1 - n2; break;
		case '*': ans = n1 * n2; break;
		case '/': ans = n1 / n2; break;
		}

		cout << "Answer =" << ans << endl;
		cout << "\nDo another (y/n)? ";
		cin >> ch;

	} while (ch != 'n');
}
