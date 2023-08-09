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

    cout<<"ROTATION 45 DEGREES"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    for(int i=0;i<5;i++)
    {
        for(int spaces=0; spaces<i;spaces++)
        {
            cout<<" ";
        }
    cout<< helloString[i]<<endl;
    }
    cout<<endl;
    Sleep(1000);
}
