#include<iostream>
#include<string>
using namespace std;
void ListStudent(int num, string name[1000],int score[1000]);
char Calgrade(int score[1000], int n);

int main()
{
	int num, score[1000];
	string name[1000];
	cout << "Input Number of Student : ";
	cin >> num;
	for (int n = 0;n < num;n++)
	{
		cout << "Input Name : ";
		cin >> name[n];
		cout << "Input score " << n+1 << " : ";
		cin >> score[n];
		cout << endl;
	}
	cout << endl;
	ListStudent(num, name, score);
	return(0);
}

void ListStudent(int num, string name[1000],int score[1000])
{
	char grade;
	for (int n = 0; n < num;n++)
	{
		cout << "Student Name : " << name[n] << " Score " << n+1 << " = " << score[n] << " Your grade is ";
		grade = Calgrade(score, n);
		cout << grade << endl;
	}
}

char Calgrade(int score[1000], int n)
{
	char grade;
		if (score[n] >= 80 && score[n] <= 100 ) grade = 'A';
	else if (score[n] >= 70 && score[n] <= 79) grade = 'B';
	else if (score[n] >= 60 && score[n] <= 69) grade = 'C';
	else if (score[n] >= 50 && score[n] <= 59) grade = 'D';
	else grade = 'F';
	return(grade);
}