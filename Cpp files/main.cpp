#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
//#include "Circle.h"
#include "Triangle.h"

using namespace std;

/* void main()
{
Figure* f;
Figure* f2;
Rectangle* r;
Circle* c;
Triangle* g;

f = new Figure();
r = new Rectangle();
c = new Circle();
g = new Triangle();

r->a = 10;
r->b = 20;
f2 = (Figure*)r;
c->D = 10;
g->P = 10;
g->t = 15;

f->PrintName();
f2->PrintName();
c->PrintName();
g->PrintName();

f->GetSquare();
f2->GetSquare();
c->GetSquare();
g->GetSquare();

delete f;
delete f2;
delete c;
delete g;
system("pause");
};*/
int main()
{
	Figure* f[10];
	int fig;
	for (int i = 0; i < 10; i++)
	{
		cout << "Choose:\n0-Exit\n1-Rectangle\n2-Triangle" <<endl;
		cin >> fig;
		if (fig == 0)
		{
			return 0;
		}

		if (fig == 1)
		{
			Rectangle* r;
			r = new Rectangle();
			cout << "Print length: ";
			cin >> r->a;
			cout << "Print width: ";
			cin >> r->b;
			r->GetSquare();
			f[i] = (Rectangle*)r;
		}

		if (fig == 2)
		{
			Triangle* r;
			r = new Triangle();
			cout << "Print height: ";
			cin >> r->t;
			cout << "Print length: ";
			cin >> r->P;
			r->GetSquare();
			f[i] = (Triangle*)r;
		}
		if (fig > 3 or fig < 0)
		{
			cout << "Please enter another number" << endl;
			return 0;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		f[i]->PrintName();
		f[i]->GetSquare();
	}
	for (int i = 0; i < 10; i++)
	{
		delete f[i];
	}
}
