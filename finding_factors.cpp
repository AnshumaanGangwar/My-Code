#include<iostream>
using namespace std;

int main() {
	int n, factor;
    factor = 2;
    bool divided = false;
    cin >> n;
    while (factor <= n/2){
        if(n % factor == 0){
            divided = true;
            cout << factor << " ";
            factor++;
        }else{
            factor++;
        }
    }
    
    
	if (!divided){
        cout << "-1";
    }    
}

