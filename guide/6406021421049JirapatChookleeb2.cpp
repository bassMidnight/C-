#include<iostream>
using namespace std;

int condiMonth(int);

string display;

int main(){
	int numberMonth;
	cout << "Month number is ";
	cin >> numberMonth;
	condiMonth(numberMonth);
	cout << "Your Anwser is " << display;
	return (0);
}

int condiMonth(int index){
	switch(index){
		case 1 : display = "January"; break;
		case 2 : display = "February"; break;
		case 3 : display = "March"; break;
		case 4 : display = "Aprill"; break;
		case 5 : display = "May"; break;
		case 6 : display = "June"; break;
		case 7 : display = "July"; break;
		case 8 : display = "August"; break;
		case 9 : display = "September"; break;
		case 10 : display = "October"; break;
		case 11 : display = "November"; break;
		case 12 : display = "December"; break;
		default : display = ".....Your input is not my scope"; break;
	}
	return (0);
}
