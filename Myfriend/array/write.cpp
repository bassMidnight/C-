#include <iostream>
#include <fstream>
using namespace std;

int main () {
    const int ValPro = 3; // 31
    const int Valdata = 2;// 6
    double data[ValPro][Valdata] = {}; 

    cout <<"Enter array 2D  !! \n";

    for(int i = 1; i <= ValPro ; i++){

        for(int j = 1 ; j <= Valdata ; j++ ){

            cout << " Enter array [" << i << "][" << j <<"] : "; 
            cin >> data[i][j] ;

        }

    }

    cout << " \n Out Enter Data !! ";

        
    ofstream myfile ("WriteData.txt");
    if (myfile.is_open())
    {
        
        for(int CountPro = 1 ; CountPro <= ValPro ; CountPro++){

            for(int CountData = 1; CountData <= Valdata; CountData ++){

                myfile << data[CountPro][CountData] << " " ;

            }

            myfile << "\n";

        }
        
        myfile.close();
    }
    else cout << "Unable to open file";
    return 0;
}