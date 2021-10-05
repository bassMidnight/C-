#include <iostream>
using namespace std;
int main() {
    char input1;

    cout << "insert char : " ;
    cin >> input1 ;

    if( input1 >= '0' && input1 <= '9'){
        cout << "Number";
    }else{
        cout << "character";
    }

    return 0;
}
