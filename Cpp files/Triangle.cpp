#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(void)
{
	cout << "Triangle constructor called!" << endl;
}
Triangle::~Triangle(void)
{
	cout << "Triangle Destructor called!" << endl;
}
double Triangle::GetSquare()
{
	cout << "Square of Triangle is " << (P*t)/2 << endl;
	return 0;
}
void Triangle::PrintName()
{
	cout << "Triangle" << endl;
}
