#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int money , i = 0, cost = 1 ,fullmoney;

    cout << "Enter money : ";
    cin >> money ;
    fullmoney = money ;
    //cout << money <<" : " << cost ;
    while(money > cost){
        money -= cost;
        money++;
        cost++;
        i++;
        //cout << "money = " << money;
        //cout << "cost = " << cost;

    }


    cout << "How mush money has Dee got ? " << fullmoney << endl;
    cout << "Dee can of this for  " << i << " Day" << endl;
    cout << "Then he still has " << money << " Bath" << endl;

}
