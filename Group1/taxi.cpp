#include <iostream>
using namespace std;
int main()
{
    int km, price;
    cout << "Enter km : ";
    cin >> km;
    if (km >= 0 && km <= 1)
    {
        price = 40;
    }
    else if (km >= 2 && km <= 10)
    {
        price = 40 + ((km - 1) * 5);
    }
    else if (km >= 11 && km <= 15)
    {
        price = 85 + ((km - 10) * 4);
    }
    else if (km >= 16 && km <= 20)
    {
        price = 110 + ((km - 15) * 3);
    }
    else if (km >= 21)
    {
        price = 125 + ((km - 20) * 2);
    }
    cout << price << " Bath";
}