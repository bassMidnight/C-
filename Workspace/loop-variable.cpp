#include <iostream>
using namespace std;

int main() {

    int i = 100 ;
    cout << "brfore loop " << i ;
    cout << " Address " << &i << endl;  
    
     for (int i = 20;i >= 11; i--){
         cout << " i  = " << i ;
         cout << " Address = " <<&i << endl;
     }
    
    cout << "after loop " << i << endl;

    return(0);
}