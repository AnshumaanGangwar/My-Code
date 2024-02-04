#include<iostream>
using namespace std;

int main() {
	int x,n,i,result;
    i=1;
    result = 1;
	cin >>x >>n;
    while(i<=n){
        result = result*x;
        i++;
    }
    cout << result;

	
	
}