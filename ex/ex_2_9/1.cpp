#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int score = 0;

    cout << "Enter score : ";
    cin >> score ; 

    if(score >= 80 && score <= 100){
        cout << "A" << endl;
    }else if(score >= 70 && score < 80){
        cout << "B" << endl;
    }else if(score >= 60 && score <= 70){
        cout << "C" << endl;
    }else if(score >= 50 && score <= 60){
        cout << "D" << endl;
    }else if(score >= 0 && score < 50){
        cout << "F" << endl;
    }

    

    return(0);
}