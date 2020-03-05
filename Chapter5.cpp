#include <iostream>
using namespace std;

// ex5_1.cpp
// function finds area of circle

float circlearea(float radius);

int main()
{
	double rad;

	cout << "\nEnter radius of circle: ";
	cin >> rad;
	cout << "Area is " << circlearea(rad) << endl;
}

float circlearea(float r)
{
	const float PI = 3.14159F;
	return r * r * PI;
}


// ex5_2.cpp
// function raises number to a power

double power(double n, int p = 2);

int main()
{
	double number, answer;
	int pow;
	char ch;

	cout << "Enter number:";
	cin >> number;
	cout << "Enter power?(y/n):";
	cin >> ch;
	if (ch == 'y')
	{
		cout << "Power:";
		cin >> pow;
		answer = power(number, pow);
	}
	else
		answer = power(number);
	cout << "Answer is: " << answer << endl;
}

double power(double n, int p)
{
	double result = 1.0;
	for (int j = 0;j < p;j++)
		result *= n;
	return result;
}

// ex5_3.cpp
// function sets smaller of two numbers to 0

void zeroSmaller(int& n1, int& n2);

int main()
{
	int a = 4, b = 7, c = 11, d = 9;
	zeroSmaller(a, b);
	zeroSmaller(c, d);

	cout << "a = " << a << " b = " << b
			<< " c = " << c << " d = " << d;
}

void zeroSmaller(int& first, int& second)
{
	if (first < second)
		first = 0;
	else
		second = 0;
}


// ex5_4.cpp
// function returns larger of two distances

struct Distance
{
	int feet;
	float inches;
};

Distance bigengl(Distance dd1, Distance dd2);
void engldisp(Distance dd);

int main()
{
	Distance d1, d2, d3;

	cout << "Enter feet:"; cin >> d1.feet;
	cout << "Enter inches:"; cin >> d1.inches;
	cout << "Enter feet:"; cin >> d2.feet;
	cout << "Enter inches:"; cin >> d2.inches;

	d3 = bigengl(d1,d2);

	cout << "d1="; engldisp(d1);
	cout << "\nd2="; engldisp(d2);
	cout << "\nlargest is "; engldisp(d3);
}

Distance bigengl(Distance dd1, Distance dd2)
{
	if (dd1.feet > dd2.feet)
		return dd1;
	if (dd1.feet < dd2.feet)
		return dd2;
	if (dd1.inches > dd2.inches)
		return dd1;
	else
		return dd2;
}

void engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}


