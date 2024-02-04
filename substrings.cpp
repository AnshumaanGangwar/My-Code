#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

void printLtoR(string str, int left, int right)
{
    for (; left <= right; left++)
    {
        cout << str[left];
    }
}

void printSubstrings(string input)
{
    for (int l = 0; l < input.size(); l++)
    {
        for (int r = l; r < input.size(); r++)
        {
            printLtoR(input, l, r);
            cout << endl;
        }
    }
}

int main()
{
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}