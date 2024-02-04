#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int i = 2;
    bool divided = true;

    while(i<n){
       if ((n%i)==0){
            cout << "Not a prime number" << endl;
            divided = false;    
       }
       i = i+1; 
    }
    if (divided) {
        cout << "It is a prime number" << endl;
    }
    
}

