#pragma once
#include "B.h"

class D2 : private B  
{
private:
	int d2;
public:
	D2(int, int);
	~D2();

	void show_D2();
};

