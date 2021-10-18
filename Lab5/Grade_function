// This Program create and used array 1 Dimension
#include <iostream>
#include <iomanip>
using namespace std;

int CalGrade(int score);
void InputData(int A);

int main()
{
    int R ;
    string name[15]; 
    float Class[15];
    float hw[15];
    float test[15];
    float mid[15];
    float final[15];
    float Score[15];

    cout << "Enter quality of student : " ;
    cin >> R;

    for (int A = 1; A <= R ; A++){
        cout <<"\n Input Name " << A << " : ";
        cin >> name[A];
        
        cout <<"\n Input Class " << A << " (0-5) : ";
        cin >> Class[A];
        while(Class[A] < 0 || Class[A] > 5 ){
            cout <<"\n Input Class " << A << " : ";
            cin >> Class[A];
        }

        cout <<"\n Input hw " << A << " (0-15) : ";
        cin >> hw[A];
        while(hw[A] < 0 || hw[A] > 15 ){
            cout <<"\n Input hw " << A << " : ";
            cin >> hw[A];
        }

        cout <<"\n Input test " << A << " (0-10) : ";
        cin >> test[A];
        while(test[A] < 0 || test[A] > 10 ){
            cout <<"\n Input test " << A << " : ";
            cin >> test[A];
        }

        cout <<"\n Input mid " << A << " (0-30) : ";
        cin >> mid[A];
        while(mid[A] < 0 || mid[A] > 30 ){
            cout <<"\n Input mid " << A << " : ";
            cin >> mid[A];
        }

        cout <<"\n Input final " << A << " (0-30) : ";
        cin >> final[A];
        while(mid[A] < 0 || final[A] > 30 ){
            cout <<"\n Input final " << A << " : ";
            cin >> final[A];
        }

        cout << setfill('*') << setw(43) << "*" << endl;

        //Poss
        Score[A] = Class[A] + hw[A] +  test[A]; + mid[A] + final[A]; 

        //Output
        cout << CalGrade(Score[A]);

        
    }


    return(0);
}

InputData(int A){

}

CalGrade(int score){

    char Grade;

    if(score >= 80 && score <= 100){
            Grade = 'A';
        }else if(score >= 70){
            Grade = 'B';
        }else if(score >= 60){
            Grade = 'C';
        }else if(score >= 50){
            Grade = 'D';
        }else if(score >= 0){
            Grade = 'F';
        }

        return (Grade);

}