#include <iostream>
using namespace std;
int main()
{
    int I,J,Maxprint;
    cout<<"Please input peramid width: ";cin>>Maxprint;
    for(I=0;I<Maxprint+1;I++)
    {
        for (J=0;J<Maxprint+1;J++)
        {
        if ((J==I)||(J==Maxprint-I)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    system ("pause");
    return 0;
}