#include <iostream>
using namespace std;

int main()
{
	int inc[100];
	int sale[3][4];
	double data[5][6];

	cout << &inc << ":" << inc << ":" << &inc[0] <<":" << &inc[16]<< endl;
	cout << &sale <<":" << sale << ":" << sale[0][0]<< ":" << &sale[1][2] << endl;
	cout << *(inc +10) <<":" <<*(sale+10) << ":" << *(data+25) << endl; 




}
