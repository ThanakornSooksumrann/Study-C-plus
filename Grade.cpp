#include<iostream>
using namespace std;
int main ()
{
	int grade;
	cout << "=========GRADE=========\n";
	cout << "Enter your score : ";
	cin >> grade;
	if (grade >= 0 && grade <= 59 ){
		cout << "You get grade F.\n";
	}
	else if (grade >= 60 && grade <= 69){
		cout << "You get grade D.\n";
	}
	else if (grade >= 70 && grade <= 79){
		cout << "You get grade C.\n";
	}
	else if (grade >= 80 && grade <= 89){
		cout << "You get grade B.\n";
	}
	else if (grade >= 90 && grade <= 100){
		cout << "You get grade A.\n";
	}
	else {
		cout << "*********Error!********\n";
	}
	cout << "=======================\n";
	return (0);
}