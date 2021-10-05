/*
    จงเขียนโปรแกรมดวยคําสั่ง while, do-while, หรือ for สําหรับการคํานวณผลบวกของเลขจํานวนนับ
    เลขคี่ (1, 3, 5, 7, ... , N) คือ 1 + 3 + 5 + 7 + 9 + ...+ N เมื่อ N เป5นค6าเลขคี่ที่รับจากคีย8บอร8ด
*/
#include<iostream>
using namespace std;
int main(){
    int n , i , sum = 0;
    
    cout << "enter number : ";
    cin >> n ;

    for ( i = 1 ; i <= n ; i++ ){
        
        if( i%2 == 0 ){
           cout << i << endl;
           sum += i;
        }else{
            
        }
        
    }
    cout << "sum is : " << sum ;
}