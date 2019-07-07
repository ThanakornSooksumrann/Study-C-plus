#include<iostream>
using namespace std;
int main ()
{
	float F,C;
	cout << "Enter Celcius temperatrun: ";
	cin >> C;
	F = (9.0/5.0*C )+32;
	cout << "\nFahrencheit = " << F << endl << endl;
	cout << "Now werther in Thailand is " << (F > 70 ? "HOT\n" : "COOL\n") << endl;
	return (0);
}