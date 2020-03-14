#include <iostream>
#include <conio.h>
using namespace std;

// ex6_1.cpp
// uses a class to model an integer data type

class Int
{
private:
	int i;
public:
	Int()
	{
		i = 0;
	}
	Int(int ii)
	{
		i = ii;
	}
	void add(Int i2, Int i3)
	{
		i = i2.i + i3.i;
	}
	void display()
	{
		cout << i;
	}
};

int main()
{
	Int Int1(7);
	Int Int2(11);
	Int Int3;

	Int3.add(Int1, Int2);
	cout << "Int3 = "; Int3.display();
	cout << endl;
}


// ex6_2.cpp
// uses class to model toll booth

const char ESC = 27;
const float TOLL = 0.5;


class toolBooth
{
private:
	unsigned int totalCars;
	double totalCash;
	
public:
	toolBooth() : totalCars(0), totalCash(0.0)
	{}
	void payingCar()
	{
		totalCars++; totalCash += TOLL;
	}
	void nopayCar()
	{
		totalCars++;
	}
	void display()
	{
		cout << "\nCars = " << totalCars
			<< ", cash = " << totalCash
			<< endl;
	}
};

int main()
{
	toolBooth booth1;
	char ch;

	cout << "\nPress 0 for each non - paying car, "
		<< "\n 1 for each paying car, "
		<< "\n Esc to exit the program.\n";
	do
	{
		ch = _getch();
		if (ch == '0')
			booth1.nopayCar();
		if (ch == '1')
			booth1.payingCar();
	} while (ch != ESC);
	booth1.display();
}

// ex6_3.cpp
// uses class to model a time data type
class time
{
private:
	int hrs, mins, secs;
public:
	time() : hrs(0), mins(0), secs(0)
	{}
	time(int h, int m, int s) : hrs(h), mins(m), secs(s)
	{}
	void display() const
	{
		cout << hrs << ":" << mins << ":" << secs;
	}
	void add_time(time t1, time t2)
	{
		secs += t1.secs + t2.secs;
		if(secs > 59)
		{
			secs -= 60; mins++;
		}
		mins += t1.mins + t2.mins;
		if (mins > 59)
		{
			mins -= 60; hrs++;
		}
		hrs += t1.hrs + t2.hrs;
	}
};

int main()
{
	const time time1(5, 30, 15);
	const time time2(2, 15, 00);
	time time3;

	time3.add_time(time1, time2);
	cout << "time3 = "; time3.display();
}
