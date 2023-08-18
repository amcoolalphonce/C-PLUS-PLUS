#include<iostream>
using namespace std;
int main()
{
        float  a, b;
        cout<<"Enter two numbers to swap: "<<endl;
        cin>>a>>b;
        //before swap
        cout<<"Value of a  = "<<a<<endl;
        cout<<"Value of b  = "<<b<<endl;

        float temp = a;
        a = b;
        b = temp;
        //after swap
        cout<<"Value of a  = "<<a<<endl;
        cout<<"Value of b  = "<<b<<endl;
        return 0;
}