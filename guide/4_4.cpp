#include<iostream>
using namespace std;

int main(){
	cout << "Please enter a simple expression ";
	cout << "(number operator number) : ";
	int leftOpe,rightOpe;
	char oper;
	int result;
	cin >> leftOpe >> oper >> rightOpe;
	/*switch(oper){
		case '+' : result = leftOpe + rightOpe;
			       break;
		case '-' : result = leftOpe - rightOpe;
			       break;
		case '*' : result = leftOpe * rightOpe;
			       break;
		case '/' : result = leftOpe / rightOpe;
			       break;
		default  :  cout << oper << " is unrecognized operation.";
					cout << endl;
					return(1);
	}*/
	if(oper == '+'){
		result = leftOpe + rightOpe;
	}else if(oper == '-'){ 
		result = leftOpe - rightOpe;
	}else if(oper == '*'){ 
		result = leftOpe * rightOpe;
	}else if(oper == '/'){ 
		result = leftOpe / rightOpe;
	}else{
		cout << oper << " is unrecognized operation.";
		cout << endl;
		return (1);
	}
	cout << leftOpe << " " << oper << " ";
	cout << rightOpe << " equals " << result << endl;
	return(0);
}
