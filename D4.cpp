#include "D4.h"

D4::D4(int d4 = 0, int d2 = 0, int d1 = 0, int b = 0) : D1(d1, b), D2(d2, b) { this->d4 = d4; }
D4::~D4() {}

void D4::show_D4()
{
	cout << "Class D4" << endl;
	show_D2();
	show_D1();
	D1::show_B();
	cout << "show_D4()" << endl;
	cout << "D4::d4 = " << d4 << endl;
}
