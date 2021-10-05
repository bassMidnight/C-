/*
    2.ให้นักศึกษาเขียนโปรแกรมเพื่อหาค่าคะแนนเฉลี่ย มีคะแนนเต็ม 5 คะแนน 
    โดยกำหนดให้รับจำนวนนักเรียนที่ทำข้อสอบจากคีย์บอร์ด
    และจากนั้นให้รับคะแนนของนักเรียนแต่ละคนผ่านทางคีย์บอร์ด
    หากการป้อนคะแนนน้อยกว่า 0 หรือมากกว่า 5 คะแนน
    ให้รับค่าคะแนนของนักเรียนคนนั้นใหม่    
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int  score = 0 , i , n ;
    float sum = 0, rage = 0;
    cout << "enter value of std : ";
    cin >> rage ;

    for (i = 1 ; i <= rage ; i++){
        cout << "enter std " << i << " score : ";
        cin >> score ;
        /*
        if(score < 0 || score > 5){
            //คะแนน <0 , >5
            cout << "enter 0-5 : ";
            cin >> score;
        }*/
        for(score ; (score < 0) || (score > 5) ; n++){
            cout << "enter 0-5 : ";
            cin >> score;
        }
        sum += score;
    }

    cout << "sum is " << sum << endl;
    float avg = sum/rage;
    cout << "avg is " << avg;
    
    return(0);
}