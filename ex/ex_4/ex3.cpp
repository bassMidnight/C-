/*
    จงเขียนโปรแกรมดวยคําสั่ง while, do-while, หรือ for สําหรับการคํานวณผลบวกของเลขจํานวนนับ
    เลขคี่ (1, 3, 5, 7, ... , N) คือ 1 + 3 + 5 + 7 + 9 + ...+ N เมื่อ N เป5นค6าเลขคี่ที่รับจากคีย8บอร8ด
*/
#include<iostream>
using namespace std;
int main(){
    int n , i , sum = 0;
    
    //5 10 15 20 25 30

    cout << "enter number limit : ";
    cin >> n; 
    for(i = 10 ; i <=n ;i++){

        if( i%5 == 0 ){
            cout << i << endl ;
        }else{

        }

    }

}