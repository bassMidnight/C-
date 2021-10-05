#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x = 1 , n = 0;
    
    cout << "Enter N  : ";
    cin >> n;

    cout << "\tx\t\t2^x" << endl;
    for(x ; x<=n ;x++){

        cout << "\t" << x << "\t\t" << pow(2,x)<<endl;

    }
} 
