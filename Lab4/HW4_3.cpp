#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    int lower = 0,upper = 0,number = 0,spe = 0 ,space = 0;
    string cstr ;


    cout << "Enter message : ";
    getline(cin, cstr);
	int num = cstr.size();

    for(int i = 0 ; i <= num ; i++){
        cout << cstr[i] << "\n";

        if(cstr[i] >= 'a' && cstr[i] <= 'z'){
            lower++;
        }else if(cstr[i] >= 'A' && cstr[i] <= 'Z'){
            upper++;
        }else if(cstr[i] >= '0' && cstr[i] <= '9'){
            number++;
        }else if(cstr[i] >= '!' && cstr[i] <= '?'){
            spe++;
        }else if(cstr[i] = ' '){
            space++;
        }
    }

    cout << "Your message have " << upper << " uppers character. \n" ;
    cout << "Your message have " << lower << " lowers character. \n";
    cout << "Your message have " << space << " spaces character. \n";
    cout << "Your message have " << spe << " special character. \n";

}
