/*#include <iostream> 
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    i = 1;
    while (i<=n){
        j = 1;
        while(j<=n-i){
            cout << " ";
            j++;
        }
        j = 1;
        int k = i; 
        while(j<=i){
            cout << k;
            /*if (j==i){
                j=1;
                int k = i;
                while (j<=i-1){
                    cout << k-1;
                    k = k-1;
                    j++;
                }
            }
            k++;
            j++;
        }
        j=1;
        int l=k-2;
        while(j<=i-1){
            cout << l;
            l--;
            j++;
        }
        cout << endl;
        i++;
    }

} */




#include <iostream>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    i=1;
    int p =(n-1)/2;
    int k = ((n-i)/2)+1;
    while (i<=k){
        j=1;
        while(j<=k-i){
            cout << " ";
            j++;
        }
        j=1;
        while (j<=i){
            cout << "*";
            j++;
        }
        j=1;
        while (j<=i-1){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    
    i=1;
    while (i<=p){
        j=1;
        while (j<=i){
            cout << " ";
            j++;
        }
        j=1;
        while (j<=p-i+1){
            cout << "*";
            j++;
        }
        j=1;
        while (j<=p-i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
