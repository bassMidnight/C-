#include <iostream>
#include <iomanip>
#include <string>  
using namespace std;

int swap();
void a();
void b();

int main()
{
    a();

    return(0);
}

void a(){

    int a[] = {0,5,2,8,9,9,1};
    int n = 6 ,MIN;
    for(int i = 1; i <= n-1 ;i++){
        MIN = i ;
        for (int x : a ) cout << x;
        cout <<endl;
        for(int j = i + 1 ; j <= n ; j++){
            if(a[MIN] > a[j]){
                MIN = j;
            }
        }
        if(i < MIN ){
            int R = a[i];
            a[i] = a[MIN];
            a[MIN] = R;
        }
    }

}