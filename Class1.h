#pragma once
#include <iostream>
#include <string>
/*!
	\brief Class output information
	\author Im
	\version 1.0
	\date 10.04.2020
*/
using namespace std;
class Class1
{
private:
	string str;
public:
	/*!
	Set value string
	\param input Info massage
	*/
	void SetString(string input)
	{
		str = input;

	}
	/*!
	Output string on the screen
	*/
	void writestring()
	{
		cout<<str;
	}

};

