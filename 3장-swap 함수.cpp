#include<iostream>
using namespace std;

//肋给等 内靛
void swap(int x,int y)
{
int tmp;
tmp=x;
x=y;
y=tmp;

}


//力措肺 等 内靛
void swap2(int *i, int *j)
{
	int tmp;
	tmp = *i;
	*i= *j;
	*j = tmp;

}


void main()
{

	int i=10;
	int j=20;
	swap (i,j);
	cout << "i" << i << ":" << "j" << j << endl;

	swap2 (&i,&j);
	cout << "i" << i << ":" << "j" << j << endl;


}
//力措肺 等 内靛


