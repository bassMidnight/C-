#include <iostream>
using namespace std;
int main()
{
    int Score;
    cout << "Enter Score : ";
    cin >> Score ;
    if(Score <= 100 && Score >= 90){
        cout << "A";
    }else if(Score <= 89 && Score >= 80){
        cout << "B";
    }else if(Score <= 79 && Score >= 70){
        cout << "C";
    }else if(Score <= 69 && Score >= 60){
        cout << "D";
    }else if( Score <= 59){
        cout << "F";
    }
    return (0);
}