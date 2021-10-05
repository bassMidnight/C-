#include <iostream>
using namespace std;
int main()
{
    char chioce;
    int W = 0,H = 0;
    float Area = 0;
    cout <<"Enter C : triangle" << "\n" <<"Enter R : squar"  << endl << "Enter : ";
    cin >> chioce;
    switch (chioce)
    {
    case 'C':
    case 'c':
        cout << "Enter your W : ";
        cin >> W;
        cout << "Enter your H : ";
        cin >> H;
        Area = 0.5 * W * H ;
        cout <<" Area of triangle is : " << Area;

        break;

    case 'R':
    case 'r':
        cout << "Enter your W : ";
        cin >> W;
        cout << "Enter your H : ";
        cin >> H;
        Area = W * H ;
        cout <<" Area of squar is : " << Area;

        break;

    default:

    cout << " Not found menu";
        break;
    }


    return(0);
}