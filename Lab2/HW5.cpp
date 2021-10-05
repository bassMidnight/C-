#include <iostream>
#include <cmath>
using namespace std;

double A , B , C , X1 , X2 ;
int main()
{
    cout << "AX^2 + BX + c = 0 \n";
    cout << "Enter number A : " ;
    cin >> A ;
    cout << "Enter number B : " ;
    cin >> B ;
    cout << "Enter number C : " ;
    cin >> C ;

    // process
    X1 = ((B*-1) + sqrt((pow(B,2) - 4*A*C)))/(2*A);
    X2 = ((B*-1) - sqrt((pow(B,2) - 4*A*C)))/(2*A);
    cout << "Answer of " << A << "X^2 + " << B << "X + " << C << "= 0 \n";
    cout << "Answer X1 is " << X1 << endl;
    cout << "Answer X2 is " << X2 << endl; 
}
