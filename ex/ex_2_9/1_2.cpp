#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int score = 0 ,project = 0 , Midterm = 0 , Final = 0 , error = 0;

    cout << "Enter project score : ";
    cin >> project ; 
    /*
    while(project <= 20 && project >= 0){
        cout << "Enter project score : 0-20";
        cin >> project ;
    }
    */
    
    cout << "Enter Midterm score : ";
    cin >> Midterm ; 
    /*
    while(Midterm <= 30 && Midterm >= 0){
        cout << "Enter Midterm score : 0-30";
        cin >> Midterm ;
    }
    */
    
    cout << "Enter Final score : ";
    cin >> Final ; 
    /*
    while(Final <= 50 && Final >= 0){
        cout << "Enter Final score : 0-20";
        cin >> Final ;
    }
    */
    if(project <0 || project > 20){
        cout << "project score error !!"<< endl;
        error = 1;
        //continue;
    }
    if(Midterm <0 || Midterm > 30){
        cout << "Midterm score error !!"<< endl;
        error = 1;
        //continue;
    }
    if(Final <0 || Final > 50){
        cout << "Final score error !!" << endl;
        error = 1;
        //continue;
    }

    score = project + Midterm + Final;
    if(error = 0){
        if(score >= 80 && score <= 100){
            cout << "Grade A" << endl;
        }else if(score >= 70 && score < 80){
            cout << "Grade B" << endl;
        }else if(score >= 60 && score <= 70){
            cout << "Grade C" << endl;
        }else if(score >= 50 && score <= 60){
            cout << "Grade D" << endl;
        }else if(score >= 0 && score < 50){
            cout << "Grade F" << endl;
        }else{
            cout << "Error!!";
        }
        cout << "Score = " << score << endl;
    }else{
        cout << "Grade " << endl;
        cout << "Score = " << score << endl;
    }
    
    return(0);
}