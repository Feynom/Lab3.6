#include "B.h"

B::B(int b = 0) { this->b = b; }
B::~B() {}

void B::show_B()
{
	cout << "Class B" << endl;
	cout << "show_B()" << endl;
	cout << "B::b = " << b << endl;
}