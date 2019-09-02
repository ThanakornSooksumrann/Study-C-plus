#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
float update_balance(string command, float dollars, float &balance);

int main()
{
	float balance = 10000, dollars;
	string command;
	cout << "Exit with 0\n";
	for(;;)
	{
	cout << "Your balance = " << fixed << setprecision(2) << balance << endl;
	cout << "Input command (1 or withdraw, 2 deposit) : ";
	cin >> command;
	if (command == "0")
	{
		cout << "Exit Program.....\n";
		break;
	}
	cout << "Input amount : ";
	cin >> dollars;
	update_balance(command, dollars, balance);
	}
	return(0);
}

float update_balance(string command, float dollars, float &balance)
{
	if (command == "1")
	{
		balance -= dollars;
	}
	else if (command == "2")
	{
		balance += dollars;
	}
	return (balance);
}