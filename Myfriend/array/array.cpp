#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int SIZE = 22;
int grades[SIZE];

int calgrade(int grades) {
    
    if(grades > 50){
        cout <<" : over50 : " ;
    }else{
        cout <<" : lower50 : " ;
    }

}

void readData() {


    string inFileName = "grades.txt";
    ifstream inFile;
    inFile.open(inFileName.c_str());

    if (inFile.is_open())
    {
        for (int i = 0; i < SIZE; i++)
        {
            inFile >> grades[i];
            cout << endl << grades[i] << " " ;
            calgrade(grades[i]);
        }

        inFile.close(); // CLose input file
    }
    else { //Error message
        cerr << "Can't find input file " << inFileName << endl;
    }
}



int main()
{
    readData();
    cout << endl << "grades[5] = " << grades[5]; 
    return 0;
}