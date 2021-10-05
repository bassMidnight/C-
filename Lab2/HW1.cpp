#include <iostream>
#include <cmath>
using namespace std;

float Pi = 3.1415 , R , Area , Cir;
int main()
{
    cout << "Program Calculate Area Circle." << endl;
    cout << "Circle radius (real number) ? ";
    cin >> R ; 
    Area =  Pi* pow(R,2);
    cout << "Area of circle with radius " << R  << " is " << Area << endl;
    Cir = 2*Pi*R ;
    cout << "Circumference is " <<  Cir ;
}