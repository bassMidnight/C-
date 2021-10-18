// This Program create and used array 1 Dimension
#include <iostream>
#include <iomanip>
using namespace std;

int R ;
string name[100]; 
float Class[100];
float hw[100];
float test[100];
float mid[100];
float final[100];
float Score[100];
char Grade[100];

int CalGrade(int score,int A);
int InputData(int A);

int main()
{

    cout << "Enter quality of student : " ;
    cin >> R;

    for (int A = 1; A <= R ; A++){
        
        //Poss
        Score[A] = InputData(A);
        char grade = CalGrade(Score[A],A);  
        
        //Output
        cout << setfill('*') << setw(43) << "*" << endl;
        cout <<"name : " << name[A] ;
        cout <<"  score = " << Score[A];
        cout <<"  Grade = " << grade;

    }

    return(0);
}

int InputData(int A){

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

        
        Score[A] = Class[A] + hw[A] +  test[A] + mid[A] + final[A];
        
        return (Score[A]);
}

int CalGrade(int score,int A){

    if(score >= 80 && score <= 100){
            Grade[A] = 'A';
        }else if(score >= 70){
            Grade[A] = 'B';
        }else if(score >= 60){
            Grade[A] = 'C';
        }else if(score >= 50){
            Grade[A] = 'D';
        }else if(score >= 0){
            Grade[A] = 'F';
        }

        return (Grade[A]);

}