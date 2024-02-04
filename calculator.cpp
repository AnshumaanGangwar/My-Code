#include <iostream>
using namespace std;

int main() {
    int n,a,b;
    cin >> n;
   
    while (n != 6) {

        if (n==1){
        
            cin >> a >> b;
            cout << (a+b)<<endl;
        
        }else if(n ==2){
        
            cin >> a >> b;
            cout << (a-b)<<endl;
    
        }else if(n ==3){
        
            cin >> a >> b;
            cout << (a*b)<<endl;
    
        }else if (n ==4){
        
            cin >> a >> b;
            cout << (a/b)<<endl;
    
        }else if (n==5){
        
            cin >> a >> b;
            cout << (a%b)<<endl;
    
        }else{
            cout << "Invalid Operation";
        }

           cin >> n;  

         
       
    }   
}