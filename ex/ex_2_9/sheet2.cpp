#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int Salary = 0 , hr= 0;
    char late , ot ;
    
    cout << "Enter Salary : ";
    cin >> Salary;

    cout << "LATE (Y/N) : ";
    cin >> late;
    while(late != 'Y' || late != 'y' ||late != 'n' || late != 'N'){
        cout << "LATE (Y/N) : ";
        cin >> late;
    }

    cout << "Over time Hour (Y/N): ";
    cin >> ot;
    while(ot != 'Y' || ot != 'y' ||ot != 'n' || ot != 'N'){
        cout << "LATE (Y/N) : ";
        cin >> ot;
    }

    if(late == 'N' || late == 'n'){
        Salary += 1000;
    }else if(late == 'Y' || late == 'y'){
        cout << "you are late"<< endl;
    }

    if(ot == 'Y' || ot == 'y'){
        cout <<"Enter OT Hour : ";
        cin >> hr;
    }else if(ot == 'N' || ot == 'n'){
        cout << "you are not have OT"<< endl;
    }

    Salary = Salary + (hr * 200);
    cout <<"Salary : " << Salary;

    return(0);
}