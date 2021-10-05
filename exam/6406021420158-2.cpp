#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Book = 0, Toy = 0 , Model = 0 , Stationery = 0 , salary = 1000 ;

    float BookS = 0, ToyS = 0 , ModelS = 0 , StationeryS = 0 , sum = 0 ,Payment = 0,bonus = 0;

    cout << "Input number of Books: ";
    cin >> Book ;

    cout << "Input number of Toy: ";
    cin >> Toy ;

    cout << "Input number of Model: ";
    cin >> Model ;

    cout << "Input number of Stationery: ";
    cin >> Stationery ;

    BookS = Book * 120; 
    ToyS = Toy * 80;    
    ModelS = Model * 50;    
    StationeryS = Stationery * 15;

    sum = BookS + ToyS + ModelS + StationeryS;
   
    if(sum == 0){

        Payment = salary * 0.5;

    }else if(sum > 0 && sum <= 4999 ){
        
        Payment = salary * 0.9;
        
    }else if(sum >= 5000 && sum <= 9999 ){
        
        Payment = salary ;

    }else if(sum >= 10000 && sum <= 99999 ){
        
        Payment = salary + (sum * 0.05);

    }else if(sum >= 100000){
        
        Payment = salary + (sum * 0.1);

    }

    cout << "Payment = " << Payment;

}
