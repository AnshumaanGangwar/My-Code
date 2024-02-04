#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cin >> n;
    i = 2;
    while (i<=n){
        bool divided = false;
        j=2;
        while(j<i){
            if (i%j==0){
                divided = true;
                break;
            }j++;
        }
        if (divided == false){
            cout << i << endl;
        }
        i++;
    }
}