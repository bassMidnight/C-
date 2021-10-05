#include <iostream>
#include <cmath>
using namespace std;

int main(){

    bool A = 0,B = 1,C = 0,D = 1;

    cout << C || !(A && B) && (A || B) || !(A || C);

}