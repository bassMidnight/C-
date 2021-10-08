#include <iostream>
#include<iomanip>
#include<string>
#include <fstream>
using namespace std;

string Data_Raw[][6] = {
    {"1", "test", "20", "30", "200"},
    {"1", "test", "20", "30", "200"}
};

string inFileName = "data/product.txt";

void menu();
int select_menu(int choice);
void show_all();
int buy();
int Admin_Menu();


int main()
{   
    int choice ;
    //Fect_Data();
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
        cout <<"menu 2 ";
        show_all();
        buy();
        break;    
    
    case 3:
        cout <<"menu 3 ";
        Admin_Menu();
        break;
    
    default:
        break;
    }
    return 0;
}

int Admin_Menu(){

    return 0 ;
}
void show_all(){
    bool flag = 1;
    ifstream inFile;
    inFile.open(inFileName);

    if (inFile.is_open() && flag == 1)
    {

        for (int i = 0 ; i <= 100 ; i++) {

            for(int j = 0 ; j < 6 ; j++){

                inFile >> Data_Raw[i][j];
                
                if(Data_Raw[i][0] == "0"){
                    flag = 0;
                    break;
                }
                cout << Data_Raw[i][j] << " ";

            }

        cout << "Row is " << i << endl;

        }

        inFile.close();
        
    } else { //Error message
        cout << "Can't find file " << inFileName << endl;
    }

}

int buy(){
    return 0;


}
