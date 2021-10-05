#include<iostream>
using namespace std;
int main(){
    int num1 , num2;
    cout << "Enter num1 : ";
    cin >> num1;

    cout << "Enter num2 : ";
    cin >>num2;

    if(num1 > num2){
        cout << "Maximun is " << num1;
    }else if(num2 > num1 ){
        cout << "Maximun is " << num2;
    }else{
        cout << " num1 = num2 " ;
    }

    

}