#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    i=1;
    int p = 1;
    while(i<=n){
        j = 1;
        while(j<=i){
            cout << p;
            p++;
            j++;
        }
        cout << endl;
        i++;
    }
}