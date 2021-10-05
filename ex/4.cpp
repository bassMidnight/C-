#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int  s1 = 0, s2 = 0 , row ;
    char n1 ,n2;
    float winrate;
    cout << "Enter row : ";
    cin >> row;
    if(row <= 20){
        
    for(int i = 1; i <= row ; i++){
        cout << "n1 \t : \t n2" << endl;
        cout << "\t 1: Hammer" << endl;
        cout << "\t 2: Scissor" << endl;
        cout << "\t 3: Paper" << endl;
        cin >> n1 >> n2;

        if(n1 == '1' && n2 == '2'){
            s1++;
        }else if(n1 == '2' && n2 == '1'){
            s2++;
        }else if(n1 == '2' && n2 == '3'){
            s1++;
        }else if(n1 == '3' && n2 == '2'){
            s2++;
        }else if(n1 == '3' && n2 == '1'){
            s1++;
        }else if(n1 == '1' && n2 == '3'){
            s2++;
        }else if(n1 == '1' && n2 == '1'){
            
        }else if(n1 == '2' && n2 == '2'){
            
        }else if(n1 == '3' && n2 == '3'){
            
        }


    }
    
    cout << "s1 is " << s1 << endl;
    cout << "s2 is " << s2 << endl;
    winrate = row * 0.7;

    if(s1 >= winrate){
        cout << "User1 Win !!!";
    }else if(s2 >= winrate){
        cout << "User2 Win !!!";
    }else{
        cout << "Draw!! ";
    }

    }else{
        cout << "lower than 20" ;
    }

    
    

}
