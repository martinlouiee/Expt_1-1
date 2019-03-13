#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	double nb, p, d1, d2, ir, avgdb, i;
	cout<<"net balance"<<endl;
	cin>>nb;
	cout<<"payment"<<endl;
	cin>>p;
	cout<<"days in the billing cycle"<<endl;
	cin>>d1;
	cout<<"number of days payment is made before billing cycle"<<endl;
	cin>>d2;
	cout<<"interest rate"<<endl;
	cin>>ir;
	avgdb = (nb*d1-p*d2)/d1;
	i = (avgdb*ir);
	cout<<"interest = "<<i<<endl;

	_getch();
	return 0;
}