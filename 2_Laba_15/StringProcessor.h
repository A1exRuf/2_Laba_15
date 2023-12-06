#pragma once

#include <iostream>
#include <string>

using namespace std;

class StringProcessor
{
public:
	StringProcessor(string str);

	int digitsAmount();

	string extractSubstring();

	string fixSpaces();
private:
	string str;
};

