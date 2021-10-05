#include<iostream>
using namespace std;

int main(){
	int point;
	cout << "Enter your point : ";
	cin >> point;
	if(point >= 80 && point <= 100 ){
		cout << "GRAD A";
	}else if(point >= 70){
		cout << "GRAD B";
	}else if(point >= 60){
		cout << "GRAD C";
	}else if(point >= 50){
		cout << "GRAD D";
	}else{
		cout << "GRAD F";
	}
}
