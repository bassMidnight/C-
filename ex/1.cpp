/*
    1.ให้นักศึกษาเขียนโปรแกรมเพื่อหาผลรวมของตัวเลขที่ไม่ใช่จำนวนเฉพาะยกกำลัง 2
    ตั้งแต่ number1 ถึง number 2 
    โดยที่ Number 1 น้อยกว่า number 2 (ให้รับค่าตัวแปร number1 และ number2 มาจากผู้ใช้)
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int num1, num2 ,sum ;
    cout << "Enter num1 and num2 (16 35)";
    cin >> num1 >> num2;

    if(num1 < num2){
        //num1 น้อยกว่า

        for(num1 ; num1 <= num2 ; num1 ++){

                if((num1==1 || num1%2 == 0 || num1%3 == 0 || num1%5==0 || num1%7==0)  && (num1!=2 && num1!=3 && num1!=5 && num1!=7)){
                    
                    //not prime
                    sum += num1 ;
                    cout << "Prime number is : " << num1 << endl;
                    continue;
                }

        }
    }else{
        //num1 มากกว่า
        cout << "number 1 is = or > number2";
    }
    cout << "sum of prime number is : " << sum << endl ;
    cout << "pow of sum is : " << pow(sum,2) ;
    return(0);
}