#include<iostream>
using namespace std;
//#include<algorithm>
#include<vector>
//#include<cstring>

int main(){
    cout << "Enter number of students ";
    int n;
    cin >> n;
    pair<int,char> a[n];
    
    for(int i = 0; i < n; i++){
        int roll;
        char sec;
        cout << endl << "Roll number " << i + 1 << " student ";
        cin >> roll;
        cout << endl << "Section " << i + 1 << " student ";
        cin >> sec;
        pair<int,char> p = {roll, sec};
        a[i] = p;
    }

    for(int i = 0; i < n; i++){
        //pair<int, char> p = a[i];
        cout << endl << a[i].first() << " " << a[i].second; 
    }


}