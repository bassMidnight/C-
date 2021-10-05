/*
    จงเขียนโปรแกรมดวยคําสั่ง while, do-while, หรือ for สําหรับการคํานวณผลบวกของเลขจํานวนนับ
    เลขคี่ (1, 3, 5, 7, ... , N) คือ 1 + 3 + 5 + 7 + 9 + ...+ N เมื่อ N เป5นค6าเลขคี่ที่รับจากคีย8บอร8ด
*/
#include<iostream>
using namespace std;
int main(){
    int x ,i = 1;
    char choice;
    
/*
    while( i <= x){

            if(i%5 == 0){
                cout << i << " is divisible by 5." << endl;
            }else{
                    //cout << x << " is not divisible by 5.";
            }

            i++;
    }
*/


    do{

        cout << "Enter number ";
        cin >> x;

        for (int i = 1 ; i <= x ; i++){

            if(i%5 == 0){
                    cout << i << " is divisible by 5." << endl;

            }else{
                    //cout << x << " is not divisible by 5.";
            }

        }
        cout << "you are use programe again  Y/n : ";
        cin >> choice;

    }while( choice == 'Y' || choice == 'y');
    cout << "Exit programe";
    exit (EXIT_FAILURE);
      
    
/*
    for (int i = 1 ; i <= x ; i++){

        if(i%5 == 0){
                cout << i << " is divisible by 5." << endl;

        }else{
                //cout << x << " is not divisible by 5.";
        }

    }
*/
    
    

}