#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i = 0;
    char Ch;
    string Message;
    cout << "Enter character : ";
    cin >> Ch;
    cout << endl;

    if((Ch >= 'A' && Ch <= 'Z') || (Ch >= 'a' && Ch <= 'z') || (Ch >= '1' && Ch <= '0')){
        if(Ch >= 'A' && Ch <= 'z'){
            cout << "Upper";

        }else if(Ch >= 'A' && Ch <= 'z'){
            cout << "Lower";
            
        }else if(Ch >= '1' && Ch <= '0'){
            cout << "Digit";
        }
    }else {
        cout <<"Special";
    }

    return(0);
}
