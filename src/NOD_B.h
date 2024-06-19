#pragma once
#include "NOD.h"

class NOD_B
{
private:
	NOD nod;
public:
	NOD_B(NOD& nod): nod(nod) {};
	int useNOD(int num1, int num2);
};


