#include <iostream>
using namespace std;

int main(){
    int num;
    int i=1;
    int sum=0;
    cin >> num;
    
    while(i<num){
        if(num%i==0){
            sum = sum+i;
            i++;
        }else{
            i++;
            continue;
        }
    }
    if (sum==num){
        cout <<"n is a perfect number";
    }else{
        cout <<"n is not a perfect number";
    }
}