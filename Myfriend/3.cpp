#include<iostream>
using namespace std;
int main(){

    int score1 = 0 , score2 = 0 , score3 = 0 ,score4 = 0 , sum;

    cout << "Enter score 1 , 2 , 3 , 4 : " ;
    cin >> score1 >> score2 >> score3 >> score4;

    sum = (score1) + (score2 /2) + (score3 /2) + score4;

    cout << "sum of score is : " << sum ;

} 
