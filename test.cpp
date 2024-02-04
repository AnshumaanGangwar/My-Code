#include <iostream>
using namespace std;

// Function to make a binary string beautiful by flipping adjacent bits
int makeBeautiful(string str)
{
    int count1 = 0, count2 = 0;

    // Loop through the string from the beginning to the second-to-last character
    for (int i = 0; i < str.size() - 1; i++)
    {
        // Check if the current bit is equal to the next bit
        if (str[i] == str[i + 1])
        {
            // Increment the count of flips needed
            count1++;

            // Flip the next bit to make the pair different
            if (str[i] == '0')
            {
                str[i + 1] = '1';
            }
            else
            {
                str[i + 1] = '0';
            }
        }
    }

    // Loop through the string from the end to the second character
    for (int i = str.size() - 1; i > 0; i--)
    {
        // Check if the current bit is equal to the previous bit
        if (str[i] == str[i - 1])
        {
            // Increment the count of flips needed
            count2++;

            // Flip the previous bit to make the pair different
            if (str[i] == '0')
            {
                str[i - 1] = '1';
            }
            else
            {
                str[i - 1] = '0';
            }
        }
    }

    // Return the minimum count of flips needed
    if (count1 < count2)
    {
        return count1;
    }
    else
    {
        return count2;
    }
}

int main()
{
    // Input a binary string
    string str;
    cin >> str;

    // Call the makeBeautiful function and store the result
    int result = makeBeautiful(str);

    // Output the minimum count of flips needed to make the string beautiful
    cout << result;
}
