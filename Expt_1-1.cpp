#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


int main ()
{
	double a, b, c, d;

	cout << "Enter number of tickets sold for Box: " << endl;
	cin >> a;
	cout << "For Box: " << a*250 << endl;
	cout << "Enter number of tickets sold for Sideline: " << endl;
	cin >> b;
	cout << "For Sideline: " << b*100 << endl;
	cout << "Enter number of tickets sold for Premium: " << endl;
	cin >> c;
	cout << "For Premium: " << c*50 << endl;
	cout << "Enter number of tickets sold for General Admission: " << endl;
	cin >> d;
	cout << "For General Admission: " << d*25 << endl;


	cout << "Total number of sales" << a*250 + b*100 + c*50 + d*25 << endl;

	_getch();
	return 0;
}

