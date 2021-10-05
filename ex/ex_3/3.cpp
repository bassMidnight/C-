#include <iostream>
using namespace std;
int main()
{
    //int ;
    float per1 , per2 , per3 , sum , score1 = 0,score2 = 0,score3 = 0;

/*รับค่า*/
    cout << "Enter Midterm score : ";
    cin >> score1;
    while (score1 > 100 || score1 < 0){
        cout << "Enter Midterm score agnain (0-100): ";
        cin >> score1;
    }

    cout << "Enter Final score : ";
    cin >> score2;
    while (score2 > 100 || score2 < 0){
        cout << "Enter Final score agnain (0-100): ";
        cin >> score2;
    }

    cout << "Enter Homework score : ";
    cin >> score3;
    while (score3 > 10 || score3 < 0){
        cout << "Enter homework score agnain (0-10): ";
        cin >> score3;
    }

    per1 = (score1/100) * 40;
    per2 = (score2/100) * 50;
    per3 = (score3/10) * 10;

    sum = per1 + per2 + per3;

    cout << "score 1 is : " << score1 << endl;
    cout << "40 \% is : " << per1 << endl;

    cout << "score 2 is : " << score2 << endl;
    cout << "50 \% is : " << per2 << endl;
    
    cout << "score 3 is : " << score3 << endl;
    cout << "10 \% is : " << per3 << endl;
    
    cout << "sum is: " << sum ;

/*ตัดเกรด*/
    if(90 <= sum && sum <= 100){
        cout << "grade = \'A\' ";
    }else if(85 <= sum && sum <= 90){
        cout << "grade = \'B+\' ";
    }else if(80 <= sum && sum < 85){
        cout << "grade = \'B\' ";
    }else if(70 <= sum && sum < 80){
        cout << "grade = \'C+\' ";
    }else if(60 <= sum && sum < 70){
        cout << "grade = \'C\' ";
    }else if(55 <= sum && sum < 60){
        cout << "grade = \'D+\' ";
    }else if(50 <= sum && sum < 55){
        cout << "grade = \'D\' ";
    }else if(sum < 50){
        cout << "grade = \'F\' ";
    }

    return 0;
}