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

    //cout <<"Size is " <<  Data.length() << endl;


    for(int i = 0; i <= (Data.length()/2)-1 ; i++){
    
    int Indexback = (Data.length() -1) - i ;

        if( Data[i] ==  Data[Indexback] ){
            cout << Data[i] << " = " << Data[Indexback] << endl;
            cout << "Your text is Palindrome.";
        }else{
            // != 
            cout << Data[i] << " = " << Data[Indexback]  << endl;
            cout << "Your text is not Palindrome.";
            break;
        }
    
    }

    return(0);
}

int isPalindrome(string Data){

    
}
