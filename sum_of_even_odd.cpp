#include <iostream>
using namespace std;

int main(){
    int n, r, nn, sum_e, sum_o;
    cin >> n;
    nn = n/10;
    r = n%10;
    sum_o = 0;
    sum_e = 0;
    while (n != 0){
        if (r%2 == 0){
            sum_e = sum_e + r;

        }else{
            sum_o = sum_o + r;     
        }
        n = nn;
        nn = n/10;
        r = n%10;
    }
    cout << sum_e << " " <<  sum_o;


}