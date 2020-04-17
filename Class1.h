#pragma once
#include <iostream>
#include <string>

using namespace std;
class Class1
{
private:
	string str;
public:
	
	void SetString(string input)
	{
		str = input;

	}
	
	void writestring()
	{
		cout<<str;
	}

};

