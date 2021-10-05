#include <iostream>
#include <fstream>

using namespace std;
int OutPutData[100][7];
string data[][] =   {
                    {0, 0, 0, 0, 0, 0,},
                    {0, 0, 0, 0, 0, 0,},
                    {0, 0, 0, 0, 0, 0,}
                    };
double count = 1;
string inFileName = "Data/Data1.txt";

void InP() {

    ofstream inpData(inFileName);
    if(inpData){

        for (int i = 1 ; i <= 100 ; i++) {

            inpData << endl;

            for(int k = 0 ; k <= 6 ; k++){
                inpData << k << " ";
            }

        }

        cout << "ss";
        inpData.close();

    }else{

        cout << "err";

    }

}

void OutP_1_Val() {

    int R , C ;
    ifstream inFile;
    inFile.open(inFileName);

    if (inFile.is_open())
    {

        for (int i = 1 ; i <= 100 ; i++) {

            for(int k = 0 ; k <= 6 ; k++){
                inFile >> OutPutData[i][k];
                cout << OutPutData[i][k] << " ";
            }
            cout << endl;

        }
        
        inFile.close();
        
        
        
        /*cout << "Select col and row of array : " ;
        cin >> R >> C ;
        while (R > 100 || R < 1 || C > 6 || C < 1){
            cout << "Select col and R(1-100) of C(1-6) : " ;
            cin >> R >> C ;
        }
        cout << OutPutData[R][C] ;
        */

    }
    else { //Error message
        cout << "Can't find input file " << inFileName << endl;
    }

}

void Fecth_Data() {

    ifstream inFile;
    inFile.open(inFileName);

    if (inFile.is_open())
    {

        for (int i = 1 ; i <= 100 ; i++) {

            for(int k = 0 ; k <= 6 ; k++){
                inFile >> OutPutData[i][k];
                //cout << OutPutData[i][k] << " ";
            }
            
            //cout << endl;

        }
        
        inFile.close();
        
    }
    else { //Error message
        cerr << "Can't find input file " << inFileName << endl;
    }
    

}

void Shw_All_data(){
    cout <<"count is : " << count;
    for (int i = 1 ; i <= 100 ; i++) {

            for(int k = 0 ; k <= 6; k++ , count++){
                if(OutPutData[i][0] == 1){
                    cout << OutPutData[i][k] <<" ";
                    count++;
                }else{
                    break;
                }
                
            }
            cout << endl;

    }

}



int main() {

    //InP();
    //OutP_1_Val();
    Fecth_Data();
    Shw_All_data();

    //cout << OutPutData[1][5];

    return(0);

}