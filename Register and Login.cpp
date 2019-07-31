#include<iostream>
#include<string>
using namespace std;
int main ()
{
	char ch;
	string na, ps, nai, psi;
	do {
		cout << "/////////////MENU////////////\n";
		cout << " 1.Register\n 2.Login\n Q.Exit Program\n";
		cout << "____________________________\n";
		cout << " Enter Menu: ";
		cin >> ch;
		if (ch=='1')
		{
			cout << "********Register********\n";
			cout << " Input Username :";
			cin >> na;
			cout << " Input Password :";
			cin >> ps;
		}
		else if (ch=='2')
		{
			cout << "*********Login**********\n";
			do {
				cout << " Input Username :";
				cin >> nai;
				cout << " Input Password :";
				cin >> psi;
				if (na==nai && ps==psi)
				{
					cout << "Username or Password correct ^___^\n";
				}
				else 
					cout << "!!!!Username or Password incorrect Please try again!!!!\n";
			}while(na!=nai || ps!=psi);
		}
	}while (ch != 'Q' && ch != 'q');
	cout << " Exit Program....\n";
	return (0);
}