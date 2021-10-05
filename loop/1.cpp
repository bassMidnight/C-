/* Program 4_6 : Use for statement */
#include <iostream>
using namespace std;
int main()
{
    int num  ;
    cout << "Enter nuber : ";
    cin >> num ;
    for (int n = 1 ; num >= n ; num--) {
        // ( กำหนดค่าเริ่มต้น ; เงือนไข -> T ทำงาน ; คำสั่งหลังจากloop1รอบ )
        cout << num;
        cout << endl;

    }
    return(0);
}