#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(void)
{
	cout<< "Rectangle constructor called!" << endl;
}
Rectangle::~Rectangle(void)
{
	cout << "Rectangle Destructor called!" << endl;
}
double Rectangle::GetSquare()
{
	cout << "Square of rectangle is " << a * b << endl;
	s = a * b;
	return s;
}
void Rectangle::PrintName()
{
	cout << "Rectangle" << endl;
}
