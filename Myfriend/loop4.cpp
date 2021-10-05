#include <iostream>
using namespace std;

int main()
{
    /*
    Area = pi*r*r
    fill = 2*pi*r
    */
    float pi = 3.14;
    cout <<"\t R \t Area \t Fill" << endl;
    for(int r = 1 ; r <= 20 ; r++){
        float Area = pi*r*r;
        float Fill = 2*pi*r;
        cout<<"\t "<<r<<"\t"<<Area<<"\t"<<Fill<<endl;                    
    }

}
