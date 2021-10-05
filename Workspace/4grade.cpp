/*
ใส่คะแนน 4 วืชา
1.แสดงเกรดรวม

2.คะแนนวิชา1
2.คะแนนวิชา2
3.คะแนนวิชา3
4.คะแนนวิชา4
5.คะแนนรวม4วิชา
คะแนนรวม

คะแนน 81-100    A
71-80 B
61-70 C
50-60 D
<50 F
*/
#include <iostream>
using namespace std;
int main() {
    
    int score1 , score2 ,score3 , score4;
    float sum1 , sum;
    char grade;
    cout << "press insert score (12 20 35 46) ";
    cin >> score1 >> score2 >> score3 >> score4;
    sum = score1 + score2 + score3 +score4;
    sum1 = sum / 4;

    if(sum1 >=81){
        grade = 'A';
    }else if(sum1>=71 && sum1<= 80){
        grade = 'B';
    }else if(sum1 >= 61 && sum1 <= 70){
        grade = 'C';
    }else if(sum1 >= 51 && sum1 <= 60){
        grade = 'D';
    }else if(sum1 < 50 && sum1 >= 0){
        grade = 'F';
    }else{
        grade = '~';
    }

    cout << "grade is : " << grade << endl;
    cout << "score 1 is : "<< score1 << endl;
    cout << "score 2 is : "<< score2 << endl;
    cout << "score 3 is : "<< score3 << endl;
    cout << "score 4 is : "<< score4 << endl;
    cout << "score sum is : "<< sum << endl;
    
} 

