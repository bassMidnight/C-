#include <iostream>
using namespace std;
int main()
{
    char size , meterial;
    int area = 0 ,cost = 0, total = 0;

    cout << "Enter area : ";
    cin >> area;
    cout << "Enter type of meterial : ";
    cin >> meterial;
/*
    if(meterial == 'b' || meterial == 'B'){
        meterial = 'B';
    }else if(meterial == 'g' || meterial == 'G'){
        meterial = 'G';
    }else if(meterial == 'p' || meterial == 'P'){
        meterial = 'P';
    }
*/

    if(area >= 20 && area <= 40){
        cost = 200000;
        size = 'S';
    }else if(area >= 41 && area <= 100){
        cost = ((area - 40)*3000)+200000;
        size = 'M';
    }else if(area >= 101){
        cost = ((area - 100)*2000)+200000+150000;
        size = 'L';
    }

    switch (meterial)
    {
    case 'b' :
    case 'B' :

        if(size == 'S'){
            total = cost + (area * 5000);
        }else if(size == 'M'){
            total = cost + (area * 7500);
        }else if(size == 'L'){
            total = cost + (area * 15000);
        }
        

        break;

    case 'g' :
    case 'G' :
        
        if(size == 'S'){
            cout << "Error";
        }else if(size == 'M'){
            total = cost + (area * 10000);
        }else if(size == 'L'){
            total = cost + (area * 20000);
        }

        break;

    case 'p' :
    case 'P' :
        
        if(size == 'S'){
            cout << "Error";
        }else if(size == 'M'){
            total = cost + (area * 15000);
        }else if(size == 'L'){
            total = cost + (area * 30000);
        }

        break;
    
    default:
        cout << "Error";
        break;
    }

    cout << "The house will cost " << total << " bath to build.";


}