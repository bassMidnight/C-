#include<iostream>
using namespace std;

int main(){
	char Choice;
	float Area;
	cout << "1. Circle" << endl;
	cout << "2. Rectanle" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter your choose number : ";
	cin >> Choice;
	/*if(Choice == '1'){
		float Radius;
		cout << "\nEnter radius : ";
		cin >> Radius;
		Area = 3.14159F * Radius * Radius;
		cout << "Area of Circle = " << Area << endl;
	}else if(Choice == '2'){
		float Length,Width;
		cout << "Enter length and width";
		cin >> Length >> Width;
		Area = Length*Width;
		cout << "Area of Ractangle = " << Area << endl;
	}else if (Choice == '3') {
		cout << "\n . . . Exit Program . . .\n"; 
	}else{
		cout << "\nYou choose out of range is not process.\n";
    }*/
	switch(Choice){
		case '1' : 		float Radius;
						cout << "\nEnter radius : ";
						cin >> Radius;
						Area = 3.14159F * Radius * Radius;
						cout << "Area of Circle = " << Area << endl;
						break;
						
		case '2' : 		float Length,Width;
						cout << "Enter length and width : ";
						cin >> Length >> Width;
						Area = Length*Width;
						cout << "Area of Ractangle = " << Area << endl;
						break;
						
		case '3' : 		cout << "\n . . . Exit Program . . .\n"; 
						break;	
		default  :      cout << "\nYou choose out of range is not process.\n";	
	}
	return(0);
}
