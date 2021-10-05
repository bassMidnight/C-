#include<iostream>
using namespace std;

int main(){
	char inputChar;
	cout << "Enter your character : ";
	cin >> inputChar;
	if(inputChar >= '0' && inputChar <= '9' ){
		cout << "Input is numberic";
	}else{
		cout << "Input is not numberic";
	}
	return (0);
}
