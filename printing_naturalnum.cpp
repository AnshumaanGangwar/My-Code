#include<iostream>
using namespace std;
int main(){
    int i;
    cin >> i;
    
    while (i!=50){
        if (i >= 1){

            if (i == 15) {
                cin >> i;
                continue;
            }else{
                cout << i << " ";
                cin >> i;

            }

        }else{
            cin >> i;
            continue;
        }
    }
    cout << i;

}