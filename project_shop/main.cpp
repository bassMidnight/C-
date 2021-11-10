#include <iostream>
#include<iomanip>
#include<string>
#include <fstream>
using namespace std;

string Name_prod[30][2];
double Detail_prod[30][5];

string inFile_NamePro = "data/Name_prod.txt";
string inFile_DetailPro = "data/Detail_prod.txt";

void menu();
int select_menu(int choice);
void show_all();
int buy();
int Admin_Menu();
void Fect_Data();


int main()
{   
    int choice ;
    Fect_Data();
    menu();
    cin >> choice;
    select_menu(choice);

    

    return 0;
}


void menu(){
    int choice= 0;
    cout << "+" << setfill('-') << setw(89) << "+" << endl;
	cout << setfill(' ') << setw(45) << "SHOP" << endl;
	cout << "+" << setfill('-') << setw(89) << "+" << endl;
    cout << "+" << setfill(' ') << setw(47) << "SELECT MENU" << setfill(' ') << setw(42) << "+" << endl;
    cout << "+" << setfill(' ') << setw(50) << "1. Show all product" << setfill(' ') << setw(39) << "+" << endl;
    cout << "+" << setfill(' ') << setw(45) << "2. Buy product" << setfill(' ') << setw(44) << "+" << endl;
    cout << "+" << setfill(' ') << setw(44) << "3. Admin menu" << setfill(' ') << setw(45) << "+" << endl;
    cout << "+" << setfill(' ') << setw(44) << "0. Exit" << setfill(' ') << setw(45) << "+" << endl;
    cout << "+" << "   Select : " ;
}


int select_menu(int choice){
    switch (choice)
    {
    case 1:
        cout << "+" << setfill('-') << setw(90) << "+" <<  endl;
        cout << "+" << setfill(' ') << setw(45) << "Show all product" << setfill(' ') << setw(45) << "+" << endl;
        cout << "+" << setfill('-') << setw(90) << "+" <<  endl;
        show_all();
        break;

    case 2:
        show_all();
        buy();
        break;    
    
    case 3:
        cout << "menu 3 ";
        Admin_Menu();
        break;
    
    default:
        break;
    }
    return 0;
}

void Fect_Data(){

//------------------Name----------------------//
    ifstream inFile;
    inFile.open(inFile_NamePro);

    if (inFile.is_open()){

        for (int i = 1 ; i <= 100 ; i++){

            for(int j = 1 ; j < 2 ; j++){

                inFile >> Name_prod[i][j];

                if(Name_prod[i][1] == ""){
                    break;
                }

            }

        }

    }
    inFile.close();

//----------------Detail-----------------------//
    ifstream inFile_Detail;
    inFile_Detail.open(inFile_DetailPro);

    if (inFile_Detail.is_open()){

        for (int i = 1 ; i <= 100 ; i++){

            for(int j = 1 ; j <= 5 ; j++){

                inFile_Detail >> Detail_prod[i][j];

                if(Detail_prod[i][1] == 0){
                    break;
                }

            }

        }

    }
    inFile.close();

}

int Admin_Menu(){

    return 0 ;
}

void show_all(){
    bool Flag_Name = 1;

    cout << "+" << setfill('-') << setw(15) << "Name" << setfill('-') << setw(25) << "IDProduct" << setfill('-') << setw(25) << "Priece" << setfill('-') << setw(15) << "eqt" << setfill('-') << setw(10) << "+" <<  endl;     
    cout << "+" << setfill('-') << setw(90) << "+" << endl;

    for(int i = 1 ; i < 100 ; i++){

        if(Name_prod[i][1] == ""){
            Flag_Name = 0;
        }

        if(Flag_Name == 1){

            cout << setfill(' ') << setw(17) <<  Name_prod[i][1] ;
            cout << setfill(' ') << setw(20) <<  Detail_prod[i][1] ;
            cout << setfill(' ') << setw(28) <<  Detail_prod[i][3] ;
            cout << setfill(' ') << setw(16) <<  Detail_prod[i][4] << endl;

        }
       
    }

}

int buy(){

    int ID = 1 , EQT = 0 ;
    cout <<"Enter ID Eqt (12 20) | Enter ( 0 0 ) for Exit " << endl;

    cin >> ID >> EQT ;
    
    while (ID != 0)
    {
        cin >> ID >> EQT ;
    }
    
    return 0;


}
