#include <iostream>
using namespace std;
int main()
{
    int money;

    float tax , total;

    if(money >= 50000){
        tax =  0.12;
    }else if(money >= 20000){
        tax =  0.1;    
    }else if(money >= 10000){
        tax =  0.07; 
    }else if(money < 10000){
        tax =  0.05; 
    }

    total = money - (money * tax);

    return(0);
}