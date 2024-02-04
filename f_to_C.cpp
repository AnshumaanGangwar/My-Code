#include<iostream>
using namespace std;


int main(){
	int S,E,W;
	cin >> S >> E >> W;
	int f= S;
	

	while (f<=E){
        int celcius = (5.0/9)*(f-32);
		cout << f << " " << celcius << endl;
		f = f+W;
	}

}


