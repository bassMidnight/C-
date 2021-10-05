#include<iostream>
using namespace std;
int main(){
    int n , i , sum = 0;
    
    //5 10 15 20 25 30

    cout << "enter number limit : ";
    cin >> n; 
    for(i = 1 ; i <= n ; n--){

        cout << "n is" << n ;
        sum += n;
        cout << "\t sum is : " << sum << endl;
    }
    cout << "all sum is " << sum ;

}