#include <iostream>
using namespace std;
int main()
{
    int line,i,j;
    char character;
    cout << "Input number line : ";
    cin >> line ;
    cout << "Input character : ";
    cin >> character ;

    for(i = 1; i <= line ; i++){

        for(j = 1 ; j <= i ; j++){
            cout << character;
        }

        cout << "\n";
    }
    
    
}