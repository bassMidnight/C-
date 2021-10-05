#include<iostream>
using namespace std;
int main(){

    int stdw1 = 0 ,stdw2 = 0, stdw3 = 0;
    int stdh1 = 0 ,stdh2 = 0, stdh3 = 0;

    float avgh = 0, avgw = 0;

    cout << "Enter weight std1 : std2 : std3 ";
    cin >> stdw1 >> stdw2 >> stdw3;

    
    cout << "Enter hight std1 : std2 : std3 ";
    cin >> stdh1 >> stdh2 >> stdh3;

    avgh = ( stdh1 + stdh2 + stdh3 )/3;
    avgw = ( stdw1 + stdw2 + stdw3 )/3 ;

    cout << "Avg hight : " << avgh << "\n" << "Avg Wieght : " << avgw  ;

  
} 
