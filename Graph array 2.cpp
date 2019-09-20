#include<iostream>
#include<time.h>
using namespace std;
void display(int num[5][6]);
void graph(int num[5][6]);

int main()
{
	int num[5][6];
	srand(time(NULL));
	for (int r = 0;r < 5;r++)
	{
		for (int c = 0;c < 6;c++)
		{
			num[r][c] = rand()% 10; 
		}
	}
	display(num);
	graph(num);
}

void display(int num[5][6])
{
	cout << "--------------------------------------------------\n";
	for (int r = 0;r < 5;r++)
	{
		cout << "\t";
		for (int c = 0;c < 6;c++)
		{
			cout << num[r][c] << "\t";
		}
		cout << endl;
	}
}

void graph(int num[5][6])
{
	cout << "------------------" << "display graph" << "-------------------\n";
	cout << "\t0\t1\t2\t3\t4\t5\n";
	cout << "--------------------------------------------------\n";
	for (int r = 0;r < 5;r++)
	{
		cout << r+1 << "|" << "\t";
		for (int c = 0;c < 6;c++)
		{
			if (num[r][c] == 0)
				cout << " \t";
			else
				cout << "*\t";
		}
		cout << endl;
	}
	cout << "--------------------------------------------------\n";
}