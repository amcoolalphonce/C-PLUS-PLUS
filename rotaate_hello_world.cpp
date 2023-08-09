#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;
int main()
{
    char helloString[5] ={'H','E','L','L','O'};

    cout<<"ROTATION 0 AND 360 DEGREES"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    for (int i=0; i<=4;i++)
    {
        cout<< helloString[i]<<" ";
    }
    cout<<endl;
    Sleep(1000);
    
}
