#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
    1 เดือน  = 30 วัน
    1 ปี     = 12 เดือน
    1 ปี     = 360 วัน
    1 เดือนต้องลบออก1 เพราะถ้าเดือน1 จะไม่นับวัน 
    แต่ถ้าเดือน2 ต้องนับวันของเดือนหนึ่ง 30 วันด้วย
    */

    int day , month , year , day_all , day_total;
    int dayset = 1 , monthset = (1-1)*30 , yearset = 2513 * 360;
    int day_all_set = dayset + monthset + yearset ;


        //-------------------------input---------------------------//

        cout <<  "Please enter day month and year:";
        cin >> day >> month >> year;

        while(day < 1 || day > 30){ 
            cout <<  "Please enter day (1-30):";
            cin >> day ;
        }
        while(month < 1 || month > 12){ 
            cout <<  "Please enter month (1-12):";
            cin >> month ;
        }
        while(year < 2513 || year > 2599){ 
            cout <<  "Please enter year (2513 - 2599):";
            cin >> year ;
        }

        day_all = day+((month-1)*30)+(year*360);
        day_total = day_all - day_all_set;
        cout <<"The difference is about " << day_total << " days." << endl;

/*
        while((year >= 2513 && year <= 2599) && (day >= 1 && day <= 30) && (month <= 12 && month >= 1)){

            day_all = day+((month-1)*30)+(year*360);
            day_total = day_all - day_all_set;
            cout <<"The difference is about " << day_total << " days." << endl;
            break;

        }
*/
}
