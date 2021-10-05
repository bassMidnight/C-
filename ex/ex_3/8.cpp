#include<iostream>
using namespace std;
int main(){
    int n,in;
    cout << "Enter an integer N = ";
    cin >> in;

    n = in%10;

    switch (n)
    {
    case 0:
        cout << "0:Zero";
        break;

    case 1:
        cout << "1:One";
        break;
    
    case 2:
        cout << "2:Two";
        break;
    case 3:
        cout << "3:Three";
        break;
    case 4:
        cout << "4:Four";
        break;
    case 5:
        cout << "5:Five";
        break;
    case 6:
        cout << "6:Six";
        break;
    case 7:
        cout << "7:Seven";
        break;
    case 8:
        cout << "8:Eight";
        break;
    case 9:
        cout << "9:Nine";
        break;

    default:
        break;
    }

}