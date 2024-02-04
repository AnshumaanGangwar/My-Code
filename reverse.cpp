#include<iostream>
using namespace std;

int main() {
	int n, current_num,reverse;
    reverse = 0;
    cin >> n;
    while(n>0){
        current_num = n%10;
        n = n/10;
        reverse = ((reverse)*10) + current_num;
    }
	cout << reverse;
}
