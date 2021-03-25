#include "D2.h"

D2::D2(int d2 = 0, int b = 0) : B(b) { this->d2 = d2; }
D2::~D2() {}

void D2::show_D2()
{
	cout << "Class D2" << endl;
	show_B();
	cout << "show_D2()" << endl;
	cout << "D2::d2 = " << d2 << endl;
}