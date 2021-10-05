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

    if(Ch >= 65 && Ch <= 90){
        
        
        int Ch_number = Ch + 32;
        cout << "\'" << Ch << "\'" << " is Upper character." << endl;
        cout << "\'" << Ch << "\'" << " to Lower \'" << char(Ch_number) << "\'";

    }else if(Ch >= 97 && Ch <= 122){
        

        int Ch_number = Ch - 32;
        cout << "\'" << Ch << "\'" << " is Lower character." << endl;
        cout << "\'" << Ch << "\'" << " to Upper \'" << char(Ch_number) << "\'";
        
    }else if(Ch >= 48 && Ch <= 57){

        cout << Ch << " is digit!" << endl;

    }else{
        Message = "Special case";
    }
    cout << Message;
    return(0);
}
