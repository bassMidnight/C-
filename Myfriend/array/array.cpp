#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int SIZER = 4;
const int SIZEC = 6;
int grades[SIZER][SIZEC];
int i, j;

void readData() {


    string inFileName = "grades.txt";
    ifstream inFile;
    inFile.open(inFileName.c_str());

    if (inFile.is_open())
    {
        for ( i = 0; i < SIZER; i++)
        {  
            for( j = 0 ; j <= SIZEC ; j++)
            inFile >> grades[i][j];
            cout << grades[i][j] << " " ;
        }
        cout <<  endl ;

        inFile.close(); // CLose input file
    }
    else { //Error message
        cerr << "Can't find input file " << inFileName << endl;
    }
}



int main()
{
    readData();
    //cout << endl << "grades[5] = " << grades[5]; 
    return 0;
}