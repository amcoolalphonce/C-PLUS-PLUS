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

     cout<<"ROTATION 90 DEGREES"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    for(int i=0; i<=4; i++)
    {
    cout<< helloString[i]<<endl;
    }
    cout<<endl;
    Sleep(1000);

     cout<<"ROTATION 135 DEGREES"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    for(int i=0; i<5; i++)
    {
        for(int spaces=0; spaces<4-i;spaces++)
        {
            cout<<" ";
        }
        cout<< helloString[i]<<endl;
    }
    cout<<endl;
    Sleep(1000);

    cout<<"ROTATION 180 DEGREES"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    for(int i=4; i>=0;i--)
    {
        cout<< helloString[i]<<" ";
    }
    cout<<endl;
    Sleep(1000);

    cout<<"ROTATION 225 DEGREES"<<endl;
    for(int i=0; i<5;i++)
    {
        for(int spaces=0; spaces<i;spaces++)
        {
            cout<<" ";
        }
        cout<< helloString[5-(i+1)]<<endl;
    }
    cout<<endl;
    Sleep(1000);

    cout<<"ROTATION 270 DEGREES"<<endl;
    for(int i=4; i>=0;i--)
    {
        cout<< helloString[i]<<endl;
    }
    cout<<endl;
    Sleep(1000);

    cout<<"R0TATION 315 DEGREES"<<endl;
    for(int i=0; i<5; i++)
    {
        for(int spaces=0;spaces<4-i;spaces++)
        {
            cout<<" ";
        }
        cout<< helloString[4-i]<<endl;
    }
    return 0;
}
