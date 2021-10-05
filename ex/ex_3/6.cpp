#include<iostream>
using namespace std;
int main(){
    int x , width = 0, length = 0, base = 0, height = 0;
    float Area;
    cout << "Select 1.(Rectangle) or 2.(Triangle) : ";
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "Enter width, length ";
        cin >> width >> length ;
        Area = width * length;
        cout << "Rectsngle Area = " << Area;
        break;

    case 2:
        cout << "Enter base, height ";
        cin >> base >> height;
        Area = 0.5 * base * height;
        cout << "Triangle Area = " << Area;
        break;
    default:
        break;
    }

    

}