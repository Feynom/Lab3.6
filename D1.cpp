#include "D1.h"

D1::D1(int d1 = 0, int b = 0) : B(b) { this->d1 = d1; }
D1::~D1() {}

void D1::show_D1()
{
	cout << "Class D1" << endl;
	show_B();
	cout << "show_D1()" << endl;
	cout << "D1::d1 = " << d1 << endl;
}
