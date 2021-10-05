#include <iostream>
using namespace std;
int main() {
    long income , result , pertax = 0;
    float tax;

    cout << "Insert income per year : ";
    cin >> income ;
    
    if(income >= 0 ){
        
        if(income <= 100000){
            tax = 0.05;
        }else if(income <= 500000){
            tax = 0.1;
        }else if(income <= 1000000){
            tax = 0.20;
        }else if(income <= 4000000){
            tax = 0.30;
        }else{
            tax = 0.37;
        }

    }else{
        cout << "number is postive only ";
    }
    
    cout << "per tax is : " << tax << endl; 
    cout << "income is : " << income << endl;

    result = income * tax ;
    cout << "tax is : " << result ;
    
    return 0;
}
