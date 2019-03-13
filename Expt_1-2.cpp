#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double a, b;
	cout << "input mass:" <<endl;
	cin >> a;
	cout << "mass = " << a << "g" <<endl;
	cout << "input density: " << endl;
	cin>> b;
	cout << "density =" << b << "g/cm^3" << endl;
	cout << "volume of the opbject = " << a/(4*b) << "cm^3" << endl;
	_getch();
	return 0;
}