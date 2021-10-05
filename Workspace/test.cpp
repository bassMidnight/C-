#include <iostream>
using namespace std;

int main() {
/*
    int i = 100 ; //ตัวเลข ไม่มีทศนิยม

    float f = 15.6464 ; //ตัวเลข มีทศนิยม
    double d = 13.2256 ;//ตัวเลข มีทศนิยม
    long l = 156.184944649848 ;////ตัวเลข มีทศนิยม
*/

/*
    string S ; 

    //cin >> S ;
    getline(cin,S);
    cout << "S  is : " << S;
*/
/*
    if(condition){
        
        ทำงาน

    }else if(condition){

        ทำงาน

    }else if(condition){

        ทำงาน

    }
*/
//
    char gender ;
    int age;
    cin >> gender >> age;

    if(gender == 'M' ){

            if(age <= 15){
                cout << "boy.";
            }else{
                cout << "man.";
            }

    }else if(gender == 'F'){

            if(age <= 15){
                cout << "gril.";
            }else{
                cout << "women";
            }

    }
}