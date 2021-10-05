#include<iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int m = 0,n = 0;
    float gcd = 0,lcm = 0;

    cout << "Enter first number : ";
    cin >> m;
    cout << "Enter second number : ";
    cin >> n;

    gcd = __gcd(m, n);
    lcm = (m*n) / __gcd(m, n);

    cout << fixed << setprecision(2) << gcd << endl;
    cout << fixed << setprecision(2) << lcm << endl;
} 
