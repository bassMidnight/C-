#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int number1 , number2 ,rangenum,sum,numpow;

    cout << "Enter number1 : ";
    cin >> number1;
    cout << "Enter number2 : ";
    cin >> number2;

    if(number1 < number2){
        //rangenum = number2 - number1;
        cout << "number 1 is lower than number2 ";
        for(number1 ; number1 <= number2 ; number1++){

            if((number1==1 || number1%2 == 0 || number1%3 == 0 || number1%5==0 || number1%7==0) && (number1!=2 && number1!=3 && number1!=5 && number1!=7)){

            cout << endl << number1 <<"^2";
            numpow = pow(number1,2);
            cout << " = " << numpow;
            sum += numpow;
            
            continue;
            }
            
        }
        cout << endl << "sum is : " << sum ;
        //cout << endl << "exalt of sum is : " << pow(sum,2);
    }else{
        cout << "number 1 is greater than number2 ";
    }
}