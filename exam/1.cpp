#include <iostream>
using namespace std;

int main()
{
    int year = 0;

    cout << "Please enter year : ";
    cin >> year ;

    if(((year % 4 == 0) && (year % 100 != 0)) || ((year % 100 == 0) && (year % 400 == 0))){

        cout << "Year " << year  << " is a leap year";

    }else{

        cout << "Year " << year  << " is not a leap year";

    }
}