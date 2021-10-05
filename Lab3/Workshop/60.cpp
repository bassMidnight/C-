#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int A = 12, B = 3, C = 6, D = 2 ,F;
    F = A + B / C - pow(D,2);
    cout << F << endl;

    F = (A+B) % C; 
    cout << F << endl;

    F = (A+B) / pow(D,2);
    cout << F;
}