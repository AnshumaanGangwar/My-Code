#include<iostream>
using namespace std;


int main(){

	int N,sum, currentnum;
	sum = 0;
	currentnum = 0;
	cin >> N;

	while(currentnum<=N){
		sum = sum+currentnum;
		currentnum = currentnum+2;	
    }
	cout << sum;
    
}  
