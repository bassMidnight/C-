#include<iostream>
using namespace std;
int main(){
    int score , i , sum = 0 , stu = 0;
    cout << "enter number of students : ";
    cin >> stu;

    for (i = 1 ; i <= stu ; i++){
        cout << endl << "please insert score : ";
        cin >> score ;
        if(score <= 100 && score >= 80){
            cout << "Grade = G"<<endl;
        }else if(score < 80 && score >= 50){
            cout << "Grade = P"<<endl;
        }else if(score < 50 && score >= 0){
            cout << "Grade = F"<<endl;
        }else{
            cout  << "score is not 1-100"<<endl;
        }

    }

}