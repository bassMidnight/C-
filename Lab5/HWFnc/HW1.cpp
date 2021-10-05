// This Program create and used array 1 Dimension
#include <iostream>
//#include <iomanip>
using namespace std;

int A = 0 , R = 0 , choice ,c = 1 ,max = 0;
string name[15]; 
float Class[15];
float hw[15];
float test[15];
float mid[15];
float final[15];
char Grade[15];
float Score[15];

void SumScore(int RowStd);
void Calgrade(int RowStd);
int Inp(string cat,int RowStd,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]);

int main()
{
        cout << "Menu" << endl;
        cout << " 1. Input student quality " << endl;
        cout << " 2. Input Name " << endl;
        cout << " 3. Input Homework score" << endl;
        cout << " 4. Input Class score" << endl;
        cout << " 5. Input Test score" << endl;
        cout << " 6. Input Mid term score" << endl;
        cout << " 7. Input Fianl score" << endl;
        cout << " 8. Show Sum Score" << endl;
        cout << " 9. Show Grade" << endl;
        cout << " 0. Exit" << endl;
        cout << " please select menu : " ;
        cin >> choice; 

        switch (choice)
        {
        case 0:
            break;

        case 1:
            cout << "Input student quality ." << endl;
            cout << "-----------------------" << endl;
            cin >> R;

            break;
        
        case 2:
            for(int i ; i <= R ; i++){
                cout <<" Input name " << c << " : ";
                cin >> name[i];
            }
            
            break;
        
        case 3:
            cout <<"Input Class Score !!";
            Inp("InpClass",R,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]);

            break;
        
        case 4:
            cout <<"Input Home work Score !!";
            Inp("Inphw",R,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]);

            break;

        case 5:
            cout <<"Input test Score !!";
            Inp("Inptest",R,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]);

            break;

        case 6:
            cout <<"Input mid term Score !!";
            Inp("Inpmid",R,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]);
            
            break;   

        case 7:
            cout <<"Input final term Score !!";
            Inp("Inpfinal",R,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]);
            
            break;

        case 8:
            SumScore(R);

            break;

        case 9:
            Calgrade(R);
            break; 
        
        default:
            cout << "other command !! ";
            break;
        }
        
        return(0);
    }


int Inp(string cat,int RowStd,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]){
    if(cat == "Inphw"){
        for(int i = 0 ; i <= RowStd; i++){
                int c = 1;
                cout << "Enter Homework score of student " << c ;
                cin >> hw[i];
            }
    }else if(cat == "InpClass"){
        for(int i = 0 ; i <= RowStd;i++){
                int c = 1;
                cout << "Enter Class room score of student " << c ;
                cin >> Class[i];
            }    
    }else if(cat == "Inptest"){
        for(int i = 0 ; i <= RowStd;i++){
                int c = 1;
                cout << "Enter test score of student " << c ;
                cin >> test[i];
            }    
    }else if(cat == "Inpmid"){
        for(int i = 0 ; i <= RowStd;i++){
                int c = 1;
                cout << "Enter mid score of student " << c ;
                cin >> mid[i];
            }    
    }else if(cat == "Inpfinal"){
        for(int i = 0 ; i <= RowStd;i++){
                int c = 1;
                cout << "Enter final score of student " << c ;
                cin >> final[i];
            }    
    }
    
    
}

void SumScore(int RowStd){
    for(int i = 0 ; i <= RowStd ; i++){
        Score[i] = Class[i] + hw[i] +  test[i] + mid[i] + final[i]; 
    }
    
}

void Calgrade(int RowStd){
    for(int A = 0 ; A <= RowStd ; A++){

        cout << "sum score is" << Score[A] ;
        if(Score[A] <= 100 && Score[A] >= 80 ){
            Grade[A] = 'A';
        }else if(Score[A] <= 79 && Score[A] >= 70 ){
            Grade[A] = 'B';
        }else if(Score[A] <= 69 && Score[A] >= 60 ){
            Grade[A] = 'C';
        }else if(Score[A] <= 59 && Score[A] >= 50){
            Grade[A] = 'D';
        }else if(Score[A] <= 49 && Score[A] <= 0){
            Grade[A] = 'F';
        }
        cout <<"Grade : "<< Grade[A];
    }
}

    
// This Program create and used array 1 Dimension
#include <iostream>
//#include <iomanip>
using namespace std;

int A = 0 , R = 0 , choice ,c = 1 ,max = 0;
string name[15]; 
float Class[15];
float hw[15];
float test[15];
float mid[15];
float final[15];
char Grade[15];
float Score[15];

void SumScore(int RowStd);
void Calgrade(int RowStd);
int Inp(string cat,int RowStd,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]);

int main()
{
        cout << "Menu" << endl;
        cout << " 1. Input student quality " << endl;
        cout << " 2. Input Name " << endl;
        cout << " 3. Input Homework score" << endl;
        cout << " 4. Input Class score" << endl;
        cout << " 5. Input Test score" << endl;
        cout << " 6. Input Mid term score" << endl;
        cout << " 7. Input Fianl score" << endl;
        cout << " 8. Show Sum Score" << endl;
        cout << " 9. Show Grade" << endl;
        cout << " 0. Exit" << endl;
        cout << " please select menu : " ;
        cin >> choice; 

        switch (choice)
        {
        case 0:
            break;

        case 1:
            cout << "Input student quality ." << endl;
            cout << "-----------------------" << endl;
            cin >> R;

            break;
        
        case 2:
            for(int i ; i <= R ; i++){
                cout <<" Input name " << c << " : ";
                cin >> name[i];
            }
            
            break;
        
        case 3:
            cout <<"Input Class Score !!";
            Inp("InpClass",R,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]);

            break;
        
        case 4:
            cout <<"Input Home work Score !!";
            Inp("Inphw",R,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]);

            break;

        case 5:
            cout <<"Input test Score !!";
            Inp("Inptest",R,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]);

            break;

        case 6:
            cout <<"Input mid term Score !!";
            Inp("Inpmid",R,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]);
            
            break;   

        case 7:
            cout <<"Input final term Score !!";
            Inp("Inpfinal",R,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]);
            
            break;

        case 8:
            SumScore(R);

            break;

        case 9:
            Calgrade(R);
            break; 
        
        default:
            cout << "other command !! ";
            break;
        }
        
        return(0);
    }


int Inp(string cat,int RowStd,&hw[15],&Class[15],&test[15],&mid[15],&Final[15]){
    if(cat == "Inphw"){
        for(int i = 0 ; i <= RowStd; i++){
                int c = 1;
                cout << "Enter Homework score of student " << c ;
                cin >> hw[i];
            }
    }else if(cat == "InpClass"){
        for(int i = 0 ; i <= RowStd;i++){
                int c = 1;
                cout << "Enter Class room score of student " << c ;
                cin >> Class[i];
            }    
    }else if(cat == "Inptest"){
        for(int i = 0 ; i <= RowStd;i++){
                int c = 1;
                cout << "Enter test score of student " << c ;
                cin >> test[i];
            }    
    }else if(cat == "Inpmid"){
        for(int i = 0 ; i <= RowStd;i++){
                int c = 1;
                cout << "Enter mid score of student " << c ;
                cin >> mid[i];
            }    
    }else if(cat == "Inpfinal"){
        for(int i = 0 ; i <= RowStd;i++){
                int c = 1;
                cout << "Enter final score of student " << c ;
                cin >> final[i];
            }    
    }
    
    
}

void SumScore(int RowStd){
    for(int i = 0 ; i <= RowStd ; i++){
        Score[i] = Class[i] + hw[i] +  test[i] + mid[i] + final[i]; 
    }
    
}

void Calgrade(int RowStd){
    for(int A = 0 ; A <= RowStd ; A++){

        cout << "sum score is" << Score[A] ;
        if(Score[A] <= 100 && Score[A] >= 80 ){
            Grade[A] = 'A';
        }else if(Score[A] <= 79 && Score[A] >= 70 ){
            Grade[A] = 'B';
        }else if(Score[A] <= 69 && Score[A] >= 60 ){
            Grade[A] = 'C';
        }else if(Score[A] <= 59 && Score[A] >= 50){
            Grade[A] = 'D';
        }else if(Score[A] <= 49 && Score[A] <= 0){
            Grade[A] = 'F';
        }
        cout <<"Grade : "<< Grade[A];
    }
}

    
