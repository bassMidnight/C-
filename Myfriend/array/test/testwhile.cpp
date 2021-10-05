#include <iostream>
#include <fstream>

using namespace std;
string OutPutData[100][7];
string Inputdata[100][7] ;
double count = 7;
int All_data = 0;
string inFileName = "Data/Data1.txt";

void InP() {

    ofstream inpData(inFileName);
    if(inpData){

        for (int i = 1 ; i <= 100 ; i++) {

            for(int k = 0 ; k <= 5 ; k++){
                inpData << k << " ";
            }
            inpData << endl;

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
            All_data++ ;
            //cout << endl;

        }


        
        inFile.close();
        
    }
    else { //Error message
        cerr << "Can't find input file " << inFileName << endl;
    }
    

}

void Shw_All_data() {
    
    for (int i = 1 ; i <= (count/7) ; i++) {

            for(int k = 0 ; k <= 6; k++){
                if(OutPutData[i][0] == "1"){
                    cout << OutPutData[i][k] <<" ";
                    count++;
                }else{
                    break;
                }
                
            }
            cout << endl;

    }
    cout <<"count is : " << count/7-1 << endl;

}

void Insert_data() {

    int row = 0;

    ofstream inpData(inFileName);
    if(inpData){
    
    cout <<"Enter number of products to add : ";
    cin >> row;
    while(row <= 0){
        cout <<"Enter number of products to add ( more than 1 ): ";
        cin >> row;
    }
        for (int i = 1 ; i <= row ; i++) {

            for(int k = 0 ; k <= 6 ; k++){
                if(k == 0){
                    Inputdata[i][0] = "1";
                }else if(k == 1){
                    cout <<"Enter ID of product : ";
                    cin >> Inputdata[i][k];
                }else if(k == 2){
                    cout <<"Enter Name of product : ";
                    cin >> Inputdata[i][k];
                }else if(k == 3){
                    cout <<"Enter purchase price of product : ";
                    cin >> Inputdata[i][k];
                }else if(k == 4){
                    cout <<"Enter selling price of product : ";
                    cin >> Inputdata[i][k];
                }else if(k == 5){
                    cout <<"Enter quantity of product : ";
                    cin >> Inputdata[i][k];
                }

                inpData << Inputdata[i][k] << " ";

            }

        inpData << endl;

        }

        cout << "ss";
        inpData.close();

    }else{

        cout << "err";

    }

}

int main() {

    //InP();
    //OutP_1_Val();
    Fecth_Data();
    //Shw_All_data();
    Insert_data();
    //cout << OutPutData[1][5];

    return(0);

}