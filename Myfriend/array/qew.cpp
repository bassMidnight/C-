#include <iostream>
using namespace std;

int main() {
  int ary[][5] = { {1, 2, 3, 4, 5},
                   {1, 2, 3, 4, 5},
                   {1, 2, 3, 4, 5},
                   {1, 7, 8, 9, 0},
                   {0, 0, 0, 0, 0},
                   {0, 0, 0, 0, 0},
                   {0, 0, 0, 0, 0},
                 };

  int rows =  sizeof ary / sizeof ary[0]; // 2 rows  

  int cols = (sizeof ary[0] / sizeof(int)) - 1; // 5 cols

  for(int i = 1 ; i <= rows ; i++){
      for(int j = 1; j <= cols ; j++){
            if(ary[i][0] == 1){
                cout << ary[i][j] << "\t" ;
            }else{
                
            }
      }
      cout << endl;
  }
  
  cout <<"rows is : "<< rows << endl <<"cols is : " << cols;
  return 0;
}