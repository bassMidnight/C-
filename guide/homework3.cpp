#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string str;
	int i;
	int cout_upper=0,cout_lower=0,cout_space=0,cout_speci=0;
	cout << "Enter massage : ";
	getline(cin, str);
	int size = str.size();
	for(i = 0; i <= size; i++){
		if(str[i] >= 'A' && str[i]  <= 'Z'){
			cout_upper++;
		}
		else if(str[i]  >= 'a' && str[i]  <= 'z'){
			cout_lower++;
		}
		else if(str[i]  == ' '){
			cout_space++;
		}else if(str[i]  >= '!' && str[i]  <= '?'){
			cout_speci++;
		}		
	}
	cout << "Your message have " << cout_upper << " uppers character.";
	cout << "\nYour message have " << cout_lower << " lowwers character.";
	cout << "\nYour message have " << cout_space << " spaces character.";
	cout << "\nYour message have " << cout_speci << " specials character.";
}
