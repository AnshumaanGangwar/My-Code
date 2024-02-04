#include <iostream>
using namespace std;

string getCompressedString(string input)
{
    string result = "";
    for (int i = 0, count = 1; i < input.size(); i++)
    {
        if (input[i] == input[i + 1])
        {
            count++;
        }
        else
        {
            result.push_back(input[i]);
            if (count > 1)
            {
                char c = count + 48; // to get the ascii value of the integer[0-9]. 48 is ascii
                result.push_back(c); // 48 is ascii for char 0
                count = 1;
            }
        }
    }
    return result;
}

int main()
{
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str;
}