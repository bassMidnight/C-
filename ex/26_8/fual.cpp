#include <iostream>
using namespace std;
int main()
{
    int G = 0 , M = 0;
    float L = 0 , Km = 0;

    cout << "Input petroleum used : ";
    cin >> G;
    cout << "Input mileage : ";
    cin >> M;

    Km = M * 1.6093;
    L = G * 4.5461;

    cout << "Km is : " << Km << endl;
    cout << "L is : " << L << endl;

    cout << "(1) Fuel economy = " << M/G << " Miles per gallon (MPG)" << endl;
    cout << "(2) The car will use " << L/Km << " Liter per kilomater" << endl;
    cout << "(3) Fuel economy " << Km/L << " Kilometers per liter (Km/L)" << endl;


}