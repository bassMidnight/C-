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

    if((Ch >= 'A' && Ch <= 'Z') || (Ch >='a' && Ch <='z') || (Ch >='0' && Ch <='9') ){
        if ( Ch >= 'a' && Ch <='z'){
            Message = "lowre Character";
            cout << Ch << " is  " << Message << endl;
        }
        else if ( Ch >= 'A' && Ch <= 'Z'){ 
            Message = "Upper Character";
            cout << Ch << " is  " << Message << endl;
        }
        else {
            cout << Ch << " is digit";
        }
        
    }
    else  
    {
        Message = "Special charecter.";
    }
    cout << Message;
    
    return(0);
}