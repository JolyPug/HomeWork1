#pragma once
#include "Figure.h"
class Rectangle :
	public Figure

{
public:
	double a;
	double b;
	double s;
	Rectangle(void);
	~Rectangle(void);
	double GetSquare();
	void PrintName();
};
