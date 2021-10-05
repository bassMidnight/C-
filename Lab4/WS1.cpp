/* Program 4_2 : Use if-else statement */
#include <iostream>
using namespace std;
int main()
{
    int Score;

    cout << "\nEnter score : ";
    cin >> Score;
    
    if(Score >= 50){
        cout << "You pass!!";
    }else{
        cout << "You fail!!";
    }
    return(0);
}