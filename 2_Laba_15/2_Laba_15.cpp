#include "StringProcessor.h"

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    StringProcessor s(str);
    cout << "Number of digits: " << s.digitsAmount() << endl;
    cout << s.extractSubstring() << endl;
    cout << s.fixSpaces();
}