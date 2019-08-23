#include <iostream>
#include <time.h>
using namespace std;
short checknum(short, short);

int main()
{
	srand(time(0));
	short guess, random, made = 0;
	random = rand() % 10 + 1;
	cout << "###Welcome to guessing number game###\n";
	cout << "Secret number has been chosen\n";
	do {
		cout << "Guess the number (1 to 10):";
		cin >> guess;
		checknum(guess, random);
		made += 1;
	} while (guess != random);
	cout << "The secret number is " << random << endl;
	cout << "You made " << made << " guesses\n";
	return (0);
}
short checknum(short guess, short random)
{
	if (guess < random) 
	{
		cout << "The secret number is lower\n";
	}
	else if (guess > random) 
	{
		cout << "The secret number is higher\n";
	}
	else 
	{
		cout << "Congratulations!\n";
	}
	return (guess, random);
}