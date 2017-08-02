#include <iostream>
using namespace std;

int main()
{
	int inc[100];
	cout << &inc /*배열의 시작 주소(화랑로 556~)*/ <<":" <<inc /*서울여대*/ << ":" << &inc[0]/*서울여대 경비실의 주소*/<< endl;
	cout << ":" <<&inc[1]	<< ":" << &inc[2] << endl;

	cout << endl;
	cout << endl;

	int sales[4][5];

	cout << &sales<< &sales[0][0] << sales << endl;

	cout << sales +1 << ":" << sales +2 << endl;
	
	/*포인터변수는 증감이 가능한데, 배열명은 배열명 자체를 증가시키고 감소시키는 것 불가능*/








}
