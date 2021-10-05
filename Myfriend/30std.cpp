#include <iostream>
using namespace std;

int main()
{
    int score = 0 , sum = 0; 
    float avg = 0;
    for(int  i = 1 ; i <= 30 ; i++){
        cout << "Enter Score std" << i ;
        cin >> score;
        sum += score;   // sum = sum + score
    }

    avg = sum / 30;
    cout << "avg is :" << avg;
    return(0);
}
