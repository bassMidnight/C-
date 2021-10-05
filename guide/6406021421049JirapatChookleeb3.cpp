#include<iostream>
using namespace std;

int main(){
	int i;
	cout << "Enter your number : ";
	cin >> i;
	
	if(i < 0){
		cout << "Number is Negative";
	}
	else if(i == 0){
		cout << "Number is Zero";
	}
	else if(i > 0){
		cout << "Number is Positive";
	}
	return (0);
}
