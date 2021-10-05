#include <iostream>
using namespace std;

int main(){
	int n;
    cout << "Enter number :  ";
    cin >> n;
    cout << n/1000 << "\t" ; // 4   
    cout << (n%1000)/100 << "\t" ; //3
    cout << (n%100)/10 << "\t" ;//2
    cout << (n%10) << "\t" ;//1
}