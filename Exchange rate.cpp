#include<iostream>
using namespace std;
int main ()
{
	float Baths, Dollars, Euro;
	cout << "Input Thai Baths : ";
	cin >> Baths;
	cout << "****Exchangs Rate****\n";
	Dollars = Baths * 0.032600;
	Euro = Baths * 0.029000;
	cout << Baths << " Baths is " << Dollars << " Dollars.\n";
	cout << Baths << " Baths is " << Euro << " Euro.\n";
	return (0);
}