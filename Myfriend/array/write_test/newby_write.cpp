#include <iostream>
#include <fstream>
using namespace std;

int main () {
  const int size = 5;
  string x[] = {"dohno","dohn","pokk[pk","isng4566"}; 

  ofstream myfile ("example.txt");
  if (myfile.is_open())
  {
    for(int count = 0; count < size; count ++){
        myfile << x[count] << " " ;
    }
    myfile.close();
  }
  else cout << "Unable to open file";
  return 0;
}