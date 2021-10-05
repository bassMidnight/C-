#include <iostream>
using namespace std;


int main()
{
    float G1,G2,G3,G4,G5,GPA;
    cin >> G1 >> G2 >> G3 >> G4 >> G5;
	
  	GPA = (G1+G2+G3+G4+G5)/5;
  	cout << "THAI = " << G1 << "\n";
  	cout << "MATH = " << G2 << "\n";
    cout << "ENGLISH = " << G3 << "\n";
    cout << "SCIENCE = " << G4 << "\n";
    cout << "SPORT =  "<< G5 << "\n";
  	cout << "---" << endl;
  	cout << "GPA = " << GPA ;
  	return 0;
}