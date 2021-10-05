#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int num , range;

    cout << "Enter number : ";
    cin >> num;

        for(range = 1 ; range <= 12 ; range++){
            cout << num << "*" << range << "=" << num*range << endl;
        }

}