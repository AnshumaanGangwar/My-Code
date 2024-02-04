#include <iostream>
using namespace std; 
int main(){
    int s=0,ch=0,n=0;
    char c;
    c = cin.get();

    while(c != '$'){
        if (c == '\n' || c == '\t'){
            s = s+1;
            
        }else if(c>= 'a' && c <= 'z'){
            ch = ch+1;
        
        }else if( c >= '0' && c<= '9'){
            n = n+1;  
        }
		c = cin.get();
		
        
        
    }
    cout << ch << " " << n << " " << s;

    

}



