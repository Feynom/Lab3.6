#include "D3.h"

D3::D3(int d3 = 0, int d1 = 0, int b = 0) : D1(d1, b) {	this->d3 = d3;}
D3::~D3() {}

void D3::show_D3()
{
	cout << "Class D3" << endl;
	show_B();
	show_D1();
	cout << "show_D3()" << endl;
	cout << "D3::d3 = " << d3 << endl;
}