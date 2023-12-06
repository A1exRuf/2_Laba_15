#include "StringProcessor.h"

StringProcessor::StringProcessor(string str)
{
	this->str = str;
}

int StringProcessor::digitsAmount()
{
	int count = 0;
	for (char c : str)
	{
		if (isdigit(c))
		{
			count++;
		}
	}

	return count;
}

string StringProcessor::extractSubstring()
{
	size_t firstSpace = str.find(' ');
	if (firstSpace == string::npos) {
		return "";
	}
	size_t secondSpace = str.find(' ', firstSpace + 1);
	if (secondSpace == string::npos) {
		return "";
	}
	return str.substr(firstSpace + 1, secondSpace - firstSpace - 1);
}

string StringProcessor::fixSpaces()
{
	bool removeSpaces = false;

    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == ' ') {
            if (str[i + 1] == ' ') {
                removeSpaces = true;
            } else {
                removeSpaces = false;
            }
        }

        if (removeSpaces) {
            str.erase(i, 1);
            --i;
        }
    }
	return str;
}
