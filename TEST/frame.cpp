#include <iostream>
using namespace std;


int main()
{
    int n ,top,bottom,L ,R;
    //Input Example
    cin >> n;
	 if(n >= 1 && n <= 100){
       
       for(top = 1; top <= n ; top++){
         cout << "*";
       }
       cout << endl;
       
       
       for(L = 2 ; n >= L ; L++){
           cout << "*";
        for(R = 2 ; n >= R ; R++){
            cout << "*";
        }
       }
       cout << endl;

       for(bottom = 1; bottom <= n ; bottom++){
         cout << "*";

       }
       cout << endl;
       
     }else{
       
     }
    return 0;
}