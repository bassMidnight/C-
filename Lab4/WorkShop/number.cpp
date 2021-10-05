#include <iostream>
using namespace std;
int main() {
    long num;

    cout << "insert number : " ;
    cin >> num ;
    
    if(num >= 0){
        if(num > 0){
            cout << "positive";
        }else{
            cout << "negative";
        }
    }else{
        cout << "negative";
    }

/*
    if( num > 0){
        cout << "Number is positive ";
    }else if( num == 0){
        cout << "Number is zero";
    }else if( num < 0){    
        cout << "Number is negative";
    }
*/
    return 0;
}
