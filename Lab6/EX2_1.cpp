// This Program create and used array 1 Dimension
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int rand_data(int n_std);
void H_table();
void rol_table(int std_vote,int std_promote);

int main()
{
    const int n_std = 500 ;
    int std_promote = 0  ;
    srand((unsigned int) time(0));

//input
    cout << "Enter number student chairman : ";
    cin >> std_promote;

    int std_vote = rand_data(n_std);
    H_table();
    rol_table( std_vote, std_promote);

    return(0);
}

int rand_data(int n_std){

    cout << "Number of right student : " << n_std << endl;

    int std_vote = rand() % n_std;
    double std_vote_per = (std_vote/double(n_std)) * 100;
    cout << "Number of Votes : " << std_vote << " = " << std_vote_per << "%" << endl; 

    int std_not_vote = n_std - std_vote;
    double std_not_vote_per = 100 - std_vote_per;
    cout << "Number of not Votes :" << std_not_vote << " = " << std_not_vote_per << "%" << endl; 

    return (std_vote);

}

void H_table(){
    cout << "Result of election chairman" << endl ;
    cout << "-" << setfill('-') << setw(40) << "-" << endl;
    cout << "\t No. \t Vote \t Percent(%)" << endl;
    cout << "-" << setfill('-') << setw(40) << "-" << endl;
}

void rol_table(int std_vote,int std_promote){


    int per_new = std_vote ;
    int new_std_vote = std_vote;
    int sum_vote = 0 ;
    double sum_vote_per = 0;

    for(int i = 1 ; i <= std_promote ; i++){
        
        if(i != std_promote ){

            int  vote = rand()%new_std_vote ;
            double  per = (double(vote)/std_vote) * 100;
            cout << "\t "<< i <<"."<< "\t" << vote << "\t" << per << endl;
            new_std_vote -= vote;

            sum_vote += vote;
            sum_vote_per += per;
            

        }else{
            int last_vote = std_vote - sum_vote;
            int last_vote_per = 100 - sum_vote_per;
            cout << "\t "<< i <<"."<< "\t" << last_vote << "\t" << last_vote_per <<endl;

            sum_vote += last_vote;
            sum_vote_per += last_vote_per;
        }
        

    }

    cout << "-" << setfill('-') << setw(40) << "-" << endl;
    cout << "\t total" << "\t" << sum_vote << "\t" << sum_vote_per;

}

