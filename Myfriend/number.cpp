#include <iostream>
using namespace std;

int main() {
    int number, reverse = 0;
     
    cout << " Enter number to reverse : ";
    cin >> number;
  
    while (number != 0)
    {
        reverse = reverse * 10 + (number % 10);
        number = number/10;
    }
  
    cout << "\n Reverse number = " << reverse << "\n";
 return 0;
}