#include "Figure.h"
#include <iostream>
using namespace std;

Figure::Figure(void)
{
	cout << "Figure constructor called!" << endl;
}
Figure::~Figure(void)
{
	cout << "Figure Destructor called!" << endl;
}
double Figure::GetSquare()
{
	cout << "Abstract figure can't have a square " << endl;
	return 0;
}
void Figure::PrintName()
{
	cout << "Abstract figure" << endl;
}
