#include <iostream>
#include <conio.h>
using namespace std;


// ex4_1.cpp
// uses structure to store phone number
struct phone
{
	int area;
	int exchange;
	int number;
};

int main()
{

	phone ph1 = { 212,767,8900 };
	phone ph2;

	cout << "Enter your area code, exchange, and number: ";
	cin >> ph2.area >> ph2.exchange >> ph2.number;

	cout << "My number is: (" << ph1.area << ") "
		<< ph1.exchange << "-"
		<< ph1.number;

	cout << "\nYour number is: (" << ph2.area << ") "
		<< ph2.exchange << "-"
		<< ph2.number <<endl;
}

// ex4_2.cpp
// structure models point on the plane
struct point
{
	int x;
	int y;
};

int main()
{
	point p1,p2,p3;

	cout << "Enter coordinates for p1: ";
	cin >> p1.x >> p1.y;

	cout << "Enter coordinates for p2: ";
	cin >> p2.x >> p2.y;

	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;

	cout << "Coordinates of p1+p2 are: "
		<< p3.x << " " << p3.y << endl;
}


// ex4_3.cpp
// uses structure to model volume of room
struct Distance
{
	int feet;
	float inches;
};

struct Volume
{
	Distance lenght;
	Distance width;
	Distance height;
};

int main()
{
	float l, w, h;
	Volume room1 = { { 16, 3.5 }, { 12, 6.25 }, { 8, 1.75 } };

	l = room1.lenght.feet + room1.lenght.inches / 12.0;
	w = room1.width.feet + room1.width.inches / 12.0;
	h = room1.height.feet + room1.height.inches / 12.0;

	cout << "Volume = " << l * w * h; " cubic feet/n";
}