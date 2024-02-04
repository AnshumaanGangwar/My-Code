#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double basic, hra, da, allow, pf, totalSalary;
    char grade;
    cin >> basic >> grade;
    hra = (basic*20)/100.0;
    da = (basic*50)/100.0;
    pf = (basic*11)/100.0;
    if (grade == 'A'){
        allow = 1700;
    }else if(grade == 'B'){
        allow = 1500; 
    }else{
        allow = 1300;
    }
    totalSalary = basic + hra + da + allow - pf;
    int final = round(totalSalary);
    cout << final;
}

