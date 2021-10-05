#include <iostream>
using namespace std;
int main()
{
    int score1 = 0,score2 = 0,score3 = 0;
    float per1 , per2 , per3 , sum;
    cout << "Enter Midterm score : ";
    cin >> score1;
    cout << "Enter Final score : ";
    cin >> score2;
    cout << "Enter Homework score : ";
    cin >> score3;

    per1 = (score1/100) * 40;
    per2 = (score2/100) * 50;
    per3 = (score3/100) * 10;

    sum = per1 + per2 + per3;

    if(sum )
    return 0;
}