#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int ITI_all = 10 , number , sum , i ;
    float avg_score;
    
    for (i = 1 ; i <= ITI_all ;i++){
        cout << "Insert Sore " << i  << " : ";
        cin >> number ;

        if(number <= 5 && number >= 0){
            sum += number;
        }else{
            cout << " number is not 0-5";
            break;
        }
    }
    
    avg_score = sum / ITI_all;
    cout << "avg is : " << avg_score;
}