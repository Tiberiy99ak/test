#pragma once
#include <iostream>

class Class2
{
private:
	int one=0, two=0;
public:
	
	void SetValues(int input1,int input2)
	{
		one = input1;
		two = input2;

	}
	
	int COMPLEXTMATHCALCULATE()
	{
		return one + two;
		
	}
};

