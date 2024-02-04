#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
string revStr(string str)
{
    string tempStr = "";
    string revStr = "";
    for (char ch : str)
    {
        if (ch != ' ')
        {
            tempStr.push_back(ch);
        }
        else
        {
            for (int i = tempStr.size() - 1; i >= 0; i--)
            {
                revStr.push_back(tempStr[i]);
            }
            revStr.push_back(' ');
            tempStr = "";
        }
    }
    for (int i = tempStr.size() - 1; i >= 0; i--)
    {
        revStr.push_back(tempStr[i]);
    }
    return revStr;
}

int main()
{
    string str;
    getline(cin, str);
    string rev = revStr(str);
    cout << rev;
}