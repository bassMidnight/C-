#include <iostream>
using namespace std;
int main()
{
    int Score;
    cout << "Enter Score : ";
    cin >> Score ;
    if(Score <= 100 && Score >= 80){
        cout << "A";
    }else if(Score >= 70 && Score <= 79){
        cout << "B";
    }else if(Score >= 60 && Score <= 69){
        cout << "C";
    }else if(Score >= 50 && Score <= 59){
        cout << "D";
    }else if( Score <= 49 && Score >= 0){
        cout << "F";
    }else{
        cout << "insert only 0 - 100 ";
    }
    return (0);
}