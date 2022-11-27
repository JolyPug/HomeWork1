#pragma once
#include "Figure.h"
class Triangle :
	public Figure
{
public:
	double P = 0, t = 0;
	Triangle(void);
	~Triangle(void);
	double GetSquare();
	void PrintName();
};
