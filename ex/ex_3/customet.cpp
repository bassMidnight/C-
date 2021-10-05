#include<iostream>
using namespace std;
int Age = 0, Amount = 0, Company = 0,pay  = 0;
double price , discout;

int main(){
    
    cout << "Enter Age : ";
    cin >> Age;
    cout << "Enter Amount : ";
    cin >> Amount;
    cout << "Enter Company (1,0): ";
    cin >> Company;

/*ตรวจจำนวน*/
    if(Amount <= 2 && Amount > 0){
        pay = 85;

    }else if (Amount == 3){
        pay = 90;

    }else if (Amount == 4){
        pay = 95;

    }else if (Amount > 4)    {
        pay = 95 + ((Amount -4) * 6);

    }else{
        cout << "lower 1 person program will exit !! ";
        exit (EXIT_FAILURE);
    }


/*ตรวจอายุ - พนักงาน*/
    if(Company == 1){
            cout << "your customer" << endl;
            price = pay - (pay * 0.2);
        
    }else if(Age >= 60){
            cout << "your >= 60" << endl;
            price = pay - (pay * 0.15);
            
    }else{
            price = pay;
    }

/*แสดงผล*/
    cout << "discout is : " << discout << endl;
    cout << "price before discout is : " << pay << endl;
    cout << "price is : " << price << endl;

}
