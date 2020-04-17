#include <iostream>
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"

using namespace std;
int main()
{
	getchar();
	Class1 *_class = new Class1;
	_class->SetString("Input value\n");
	_class->writestring();
	Class2* _class2 = new Class2;
	int a, b , c;
	cin>>a;
	cin>>b;
	_class2->SetValues(a, b);
	c=_class2->COMPLEXTMATHCALCULATE();
	Class3* _class3 = new Class3;
	_class3->ShowtoDisplay(c);
}
