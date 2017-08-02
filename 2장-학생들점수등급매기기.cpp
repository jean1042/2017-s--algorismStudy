#include <iostream>
using namespace std;

#define NUM 20
void main()
{

	int score[NUM] = {75,60,100,90,25,75,60,100,90,25,75,60,100,90,25,75,60,100,90,25};

	for (int i = 0; i < NUM; ++i)

		cout << score[i] << endl;


	char grades[NUM];


	for (int i = 0; i < NUM; ++i)
	{
		if (score[i] >= 90) grades[i] = 'A';
		else if (score[i] >= 80) grades[i] = 'B';
		else if (score[i] >= 70) grades[i] = 'C';
		else if (score[i] >= 60) grades[i] = 'D';
		else   grades[i] = 'F';

	}

	for (int i = 0; i < NUM; ++i)
	{
		cout << score[i] << " : " << grades[i] << endl;

	}
}
