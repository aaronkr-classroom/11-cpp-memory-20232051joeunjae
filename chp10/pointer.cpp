#include <iostream>

using namespace std;

int main() {
	int x = 5;
	//p는 x를 가리킴

	int* p = &x;
	cout << "x= " << x << endl;
	cout << "&x = " << &x << endl;
	cout << "p = " << p << endl;

	//p를 이용해 x값 변경
	*p = 10;
	cout << "x= " << x << endl;
	cout << "&x = " << &x << endl;
	cout << "p = " << p << endl;

	return 0;


}