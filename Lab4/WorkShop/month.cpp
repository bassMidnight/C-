#include <iostream>
using namespace std;
int main() {
    int month ;

    cout << "insert month number (between 1-12): " ;
    cin >> month;

    switch (month)
    {
    case 1:
        cout << month << "month is January " ; 
        break;
    
    case 2:
        cout << month << "month is February " ; 
        break;

    case 3:
        cout << month << "month is March " ; 
        break;

    case 4:
        cout << month << "month is April " ; 
        break;

    case 5:
        cout << month << "month is May " ; 
        break;

    case 6:
        cout << month << "month is June " ; 
        break;

    case 7:
        cout << month << "month is July " ; 
        break;

    case 8:
        cout << month << "month is August " ; 
        break;

    case 9:
        cout << month << "month is September " ; 
        break;

    case 10:
        cout << month << "month is October " ; 
        break;

    case 11:
        cout << month << "month is November " ; 
        break;

    case 12:
        cout << month << "month is December " ; 
        break;

    default:
        cout << "Data isn't 1-12";
        break;
    }
    
    return 0;
}
