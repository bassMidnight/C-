#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int ITI_all = 0 , number , sum , i ;
    float avg_score;
    
    cout << "Enter numer of student";
    cin >> ITI_all;
    for (i = 1 ; i <= ITI_all ;i++){
        cout << "Insert Sore " << i  << " : ";
        cin >> number ;

        while(number > 5 || number < 0){
            cout << "Insert Sore (0-5)" << i  << " : ";
            cin >> number ;
        }

        sum += number ;
    }
    
    avg_score = sum / ITI_all;
    cout << "avg is : " << avg_score;
}