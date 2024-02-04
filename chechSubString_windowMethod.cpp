#include <iostream>
using namespace std;

bool checkSubString(string str1, string str2)
{
    int window = str1.size() - str2.size() + 1;          //valid value for window

    for (int w = 0, i = 0; w < window; w++)
    {
        i = 0;
        while (i < str2.size())
        {
            if (str2[i] == str1[w + i])
            {
                i++;
            }
            else
            {
                break;
            }
        }
        if (i == str2.size())   //not str2.size() - 1 as i will increae after final loop
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string str1, str2;
    cout << "Enter main string" << endl;
    getline(cin, str1);
    cout << "Enter the substring" << endl;
    getline(cin, str2);
    bool result = checkSubString(str1, str2);
    cout << result;
}
