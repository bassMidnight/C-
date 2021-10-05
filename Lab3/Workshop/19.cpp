#include <iostream>
using namespace std;

int main(){
	int fish , tomato , total;
    int fishcan , tomatocan;
    float coutfish , couttomato , minFT;
    cout << "Enter quantity of fish and tomato (fish tomato) ";
    cin >> fish >> tomato ;
    
    fishcan = 600/fish ;
	tomatocan = 200/tomato ;
    minFT = min(fishcan,tomatocan) ;
    cout << " canned fish : " << minFT << endl;
    
    //coutfish = fish-(minFT*3);
    //couttomato = tomato-(minFT*2);
    //cout << "cout of fish : " << coutfish << "\n" << "cout of tomato : " << couttomato ;
    
}