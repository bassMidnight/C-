#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    for(int i = 1 ; i <= 100 ; i++){
        cout << i << "\t";
        if(i%10 == 0){
            cout << endl;
        }
    }

    return(0);
}