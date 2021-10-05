#include <iostream>
#include <fstream>
using namespace std;

const int size = 5;
double x[size];


void Write() {

    ofstream myfile ("example.txt");
    if (myfile.is_open())
    {
        for(int count = 0; count <= size; count ++){
            myfile << x[count] << " " ;
        }
        myfile.close();
    }
    else cout << "Unable to open file";

}

void calgrade(int grades) {
    
    if(grades >= 80 && grades <= 100){
        cout <<": A" ;
    }else if(grades >= 70 && grades <= 79){
        cout <<": B";
    }else if(grades >= 60 && grades <= 69){
        cout <<": C";
    }else if(grades >= 50 && grades <= 59){
        cout <<": D";
    }else{
        cout <<" :C";
    }

}

void Read() {

    string inFileName = "example.txt";
    ifstream inFile;
    inFile.open(inFileName.c_str());

    if (inFile.is_open())
    {
        for (int i = 0; i <= size; i++)
        {
            inFile >> x[i];
            cout << endl << x[i] << " " ;
            calgrade(x[i]);
        }

        inFile.close(); // CLose input file
    }
    else { //Error message
        cerr << "Can't find input file " << inFileName << endl;
    }

}

int main () {
 
    cout << " Write " << endl;
    for(int i = 0 ; i <= size ; i++){
        cout <<"Enter array Index " << i << " : ";
        cin >> x[i];
    }

    Write();
    cout << " Read " << endl;
    Read();
    
    return 0;
}