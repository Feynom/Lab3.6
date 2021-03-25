#pragma once
#include "D2.h"
#include "D1.h"

class D4 : public D2, private D1
{
private:
	int d4;
public:
	D4(int, int, int, int);
	~D4();

	void show_D4();
};

