// This Program create and used array 1 Dimension
#include <iostream>
//#include <iomanip>
using namespace std;
int main()
{
    int A = 0 , R = 15  ;
    string name[15]; 
    float Class[15];
    float hw[15];
    float test[15];
    float mid[15];
    float final[15];
    char Grade[15];
    float Score[15];


    for (A ; A <= R ; A++){
        cout <<"\n Input Name " << A << " : ";
        cin >> name[A];
        cout <<"\n Input Class " << A << " : ";
        cin >> Class[A];
        cout <<"\n Input hw " << A << " : ";
        cin >> hw[A];
        cout <<"\n Input test " << A << " : ";
        cin >> test[A];
        cout <<"\n Input mid " << A << " : ";
        cin >> mid[A];
        cout <<"\n Input final " << A << " : ";
        cin >> final[A];

        //Poss
        Score[A] = Class[A] + hw[A] +  test[A]; + mid[A] + final[A]; 

        if(Score[A] >= 80 && Score[A] <= 100){
            Grade[A] = 'A';
        }else if(Score[A] >= 70){
            Grade[A] = 'B';
        }else if(Score[A] >= 60){
            Grade[A] = 'C';
        }else if(Score[A] >= 50){
            Grade[A] = 'D';
        }else if(Score >= 0){
            Grade[A] = 'F';
        }

        cout << "Name : " << name[A] << endl << "Grade : " << Grade[A];
    }


    return(0);
}
