#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int num , range , sum = 0;

    cout << "Enter number : ";
    cin >> num;

        for(range = 1 ; range <= num ; range++){
            
            //cout << range << endl;
            if((range==1 || range%2 == 0 || range%3 == 0 || range%5==0 || range%7==0) && (range!=2 && range!=3 && range!=5 && range!=7)){
            
            //เลขไม่เฉพาะ
            continue;
            } 

            //เลขเฉพาะ
            cout << "Prime number is : " << range << endl;
            sum +=  range ;
            
        }

        cout << endl << "sum is : " << sum ;
        
}