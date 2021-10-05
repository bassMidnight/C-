#include <iostream>
using namespace std;

float Total , P , Vat ;
int main()
{
    cout << "Enter price : " ;
    cin >> P ;
    cout << "Enter vat ( % ) : ";
    cin >> Vat ;
    Total =  (P*(Vat/100))+P ;
    cout << "Net Price of product = " << Total ;
}