#pragma once
#include <iostream>
/*!
	\brief Class additional numbers 
	\author Im
	\version 1.0
	\date 10.04.2020
	\warning Work only int numbers
*/
class Class2
{
private:
	int one=0, two=0;
public:
	/*!
	Set value from args
	\param input1,input2 Add num
	*/
	void SetValues(int input1,int input2)
	{
		one = input1;
		two = input2;

	}
	/*!
	Return result additional
	*/
	int COMPLEXTMATHCALCULATE()
	{
		return one + two;
		
	}
};

