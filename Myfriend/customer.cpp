#include <iostream>
using namespace std;
int main()
{
    char Department;
    int Hr = 0,Work_rate = 0;
    float result = 0;

    cout <<" Work hour is : ";
    cin >> Hr;

    cout <<" Department is : ";
    cin >> Department;

    switch (Department)
    {
    case 'A':
    case 'a':
        Work_rate = 100;
        break;

    case 'B':
    case 'b':
        Work_rate = 150;
        break;

    case 'C':
    case 'c':
        Work_rate = 200;
        break;

    case 'D':
    case 'd':
        Work_rate = 250;
        break;
    
    default:
        break;
    }

    result = Work_rate * Hr;
    cout << "result is : "<< result;

    return(0);
}