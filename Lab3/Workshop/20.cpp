#include <iostream>
using namespace std;

int main(){
	int fish , fish1 , tomato1 , tomato , total;
    int fishcan , tomatocan;
    float coutfish , couttomato , minFT;
    
    cout << "Enter quantity of fish and tomato (fish tomato) ";
    cin >> fish >> tomato ;
    cout << "Enter quantity to use fish and tomato (fish tomato) ";
    cin >> fish1 >> tomato1 ;

    fishcan = fish/fish1 ;
	tomatocan = tomato/tomato1 ;
    minFT = min(fishcan,tomatocan) ;
    cout << " canned fish : " << minFT << endl;
    
    //coutfish = fish-(minFT*3);
    //couttomato = tomato-(minFT*2);
    //cout << "cout of fish : " << coutfish << "\n" << "cout of tomato : " << couttomato ;
    
}