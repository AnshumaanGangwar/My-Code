#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    i=1;
    while(i<=n){
        j = 1;
        while(j<=i){
            cout << i+j-1;
            j++;
        }
        cout << endl;
        i++;
    }
}