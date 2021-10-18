// This Program create and used array 1 Dimension
#include <iostream>
#include <iomanip>
using namespace std;

string Data;
int isPalindrome(string Data);

int main()
{
    cout <<"Enter text : " ;
    cin >> Data;

    if(isPalindrome(Data)){
        cout << "Your text is Palindrome." ;
    }else{
        cout << "Your text is not Palindrome.";
    }

    return(0);
}

int isPalindrome(string Data){

    bool result; 
    
    for(int i = 0; i <= (Data.length()/2)-1 ; i++){
    
    int Indexback = (Data.length() -1) - i ;

        if( Data[i] ==  Data[Indexback] ){
            cout << Data[i] << " = " << Data[Indexback] << endl;
            result = true;
        }else{
            // != 
            cout << Data[i] << " = " << Data[Indexback]  << endl;
            result = false;
            break;
        }
    }

    return (result);
}
