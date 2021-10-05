#include <iostream>
using namespace std;

float num1 , num2 ;
int main()
{
    cout << "Enter number 1 : " ;
    cin >> num1 ;
    cout << "Enter number 2 : " ;
    cin >> num2 ;
    cout << num1 << " + " << num2 << "\t" <<  num1+num2 << endl;
    cout << num1 << " - " << num2 << "\t" <<  num1-num2 << endl;
    cout << num1 << " * " << num2 << "\t" <<  num1*num2 << endl;
    cout << num1 << " % " << num2 << "\t" <<  num1/num2 << endl;
}