#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Write a number" << endl;
    cin >> number;

    (number % 2 == 0)? cout << "Even number" << endl : cout << "Odd number" << endl;
}