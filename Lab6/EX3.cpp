#include <iostream>
#include <iomanip>
#include <string>  
using namespace std;

void getdata(int std_number);
void sortdata();
void average(int std_number);
void displaydata(int std_number);

int std_number = 3 ;
string std_data[20][7] {
    {"0","0","0","0","0","0","0"},
    {"1","1546","dfgh[","12","59","62","15"},
    {"2","1546","dfgh[","0","0","0","0"},
    {"3","1546","qdasda[","100","100","100","100"},
};

int main()
{
    //getdata(std_number);
    displaydata(std_number);
    average(std_number);

    return(0);
}

void getdata(int std_number){

    string Name ;
    double Score_T1,Score_T2,Score_T3,Sum;
    int ID;

    for(int i = 1; i <= std_number ; i++) {

            cout << " Enter ID : ";
            cin >> ID ;
            while(ID > 99999 || ID < 1){
                cout << " Enter ID : ";
                cin >> ID ;
            }
            
            cout << " Enter Name " << i << " : ";
            cin >> Name ;
            while(Name.size() > 20 || Name.size() < 1){
                cout << " Enter Name * not null and less than 20 char *" << i << " : ";
                cin >> Name ;
            }

            cout << " Enter Score Test1 : ";
            cin >> Score_T1 ;
            while(Score_T1 > 100 || Score_T1 < 1){
                cout << " Enter Score Test1 (1-100) : ";
                cin >> Score_T1 ;
            }

            cout << " Enter Score Test2 : ";
            cin >> Score_T2 ;
            while(Score_T2 > 100 || Score_T2 < 1){
                cout << " Enter Score Test2 (1-100) : ";
                cin >> Score_T2 ;
            }

            cout << " Enter Score Test3 : ";
            cin >> Score_T3 ;
            while(Score_T3 > 100 || Score_T3 < 1){
                cout << " Enter Score Test3 (1-100) : ";
                cin >> Score_T3 ;
            }

            std_data[i][0] = to_string(i);
            std_data[i][1] = to_string(ID);
            std_data[i][2] = Name;

            Score_T1 = 0.25*Score_T1;
            std_data[i][3] = to_string(Score_T1);

            Score_T2 = 0.25*Score_T2;
            std_data[i][4] = to_string(Score_T2);

            Score_T3 = 0.5*Score_T3;
            std_data[i][5] = to_string(Score_T3);

            Sum = Score_T1+Score_T2+Score_T3;
            std_data[i][6] = to_string(Sum);

    }   

}


void displaydata(int std_number){

    for(int i = 1 ;  i <= std_number ; i++){
        for(int k = 0 ; k <= 6 ; k++){
            cout << std_data[i][k] << "\t" ;
        }
        cout << endl ;
    }


}

void average(int std_number){

    double SumT1 = 0, SumT2 = 0, SumT3 = 0, SumTt = 0;
    double ASumT1 = 0, ASumT2 = 0, ASumT3 = 0, ASumTt = 0;
    int i ;
    
    for(i = 1 ;  i <= std_number ; i++){
            SumT1 += stod(std_data[i][3]);
            SumT2 += stod(std_data[i][4]);
            SumT3 += stod(std_data[i][5]);
            SumTt += stod(std_data[i][6]);
        
    }

    ASumT1 = SumT1/std_number;
    ASumT2 = SumT2/std_number;
    ASumT3 = SumT3/std_number;
    ASumTt = SumTt/std_number;

    cout << "Average of mark \t " << ASumT1 <<"\t"<< ASumT2 <<"\t"<< ASumT3 <<"\t"<< ASumTt ;
}