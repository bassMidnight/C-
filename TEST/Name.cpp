#include <iostream>
using namespace std;
int A ;
char G;
int main() {
  cout << "####      ##       ###    ###   " << endl;
  cout << "#   #    #  #     #      #      " << endl;
  cout << "#   #   #    #    #      #      " << endl;
  cout << "####    ######     ##     ##    " << endl;
  cout << "#   #   #    #       #      #   " << endl;
  cout << "####    #    #    ###    ###    " << endl;
  cout << "Pls Enter your score : ";
  cin >> A;
  if(A <= 49 ){
    G = 'F';
  }else if(A <= 54){
    G = 'D';
  }else if(A <= 59){
    G = 'D+';
  }else if(A <= 64){
    G = 'C';
  }else if(A <= 69){
    G = 'C+';
  }else if(A <= 74){
    G = 'B';
  }else if(A <= 79){
    G = 'B+';
  }else if(A <= 80){
    G = 'A';
  }
  cout << "Your grade is : " << G;
  return 0;
}
