#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int  r = 0 , choice = 0;
    float pi = 3.14 , circum = 0 , area = 0 , volume = 0;

    cout <<"Enter the number of radius : ";
    cin >> r;
    cout << "1. \t Calculate the circumference of circle" << endl;
    cout << "2. \t Calculate the area of circle" << endl;
    cout << "3. \t Calculate the volum of circle" << endl;
    cout <<"Enter the number of radius ; ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        circum = 2.0*pi*r;
        cout << "circum is " << circum ;
        break;

    case 2:
        area= pi*pow(r,2);
        cout << "area is " << area ;
        break;

    case 3:
        volume= (4.0/3.0) * pi *pow(r,3);
        cout << "volume is " << volume ;
        break;
    

    default:
        break;
    }

    return(0);
}