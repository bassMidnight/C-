/*
จงเขียนโปรแกรม เพื่อคํานวณรายไดจากเงินฝากพรอมดอกเบี้ยเมื่อเวลาผ6านไป 1 ปk, 2 ปk, 3 ปk, และ 4 ปk
ที่คํานวณเงินไดแบบดอกเบี้ยทบตน โดยมีขอมูลเขา คือ เงินตนและอัตราดอกเบี้ย และแสดงผลลัพธ8จาก
การคํานวณ โดยพิมพ8ผลลัพธ8แบบชิดขวาที่แสดงเลขทศนิยม 2 ตําแหน6ง เมื่อ
รายไดจากเงินฝาก (Income) = เงินตน (M) x (1 + อัตราดอกเบี้ย (R))ปk = M x (1+R)Y
ใหแสดงรายไดสําหรับเงินตน 10000, 15000, 20000, 25000, 30000, 35000, 40000, และ 45000
*/
#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main(){
    int M = 0 , Y = 0;
    float  R = 0 , Income = 0 , cost = 0; 

    cout << "Enter M : ";
    cin >> M;

    cout << "Enter R : ";
    cin >> R;

    for(int i = 1 ; i <= 4 ; i++){
/*
    cout << "M is : "  << M << endl;
    cout << "R is : "  << R << endl;
    cout << "Y is : "  << i << endl;
*/
    Income = M * pow((1 + R),i) ;
    
    cout << "Year " << i  << "\t income is : " << Income << endl;//" is " << cost << endl;
    }

    

} 
