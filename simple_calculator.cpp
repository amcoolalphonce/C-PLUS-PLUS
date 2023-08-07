#include<iostream>

using namespace std;
int main()
{
    cout<<"*******A BASIC CALCULATOR*****" << endl;
    cout<<"1. ADDITION"<<endl;
    cout<<"2. SUBTRACTION"<<endl;
    cout<<"3. DIVISION"<<endl;
    cout<<"4. MULTIPLICATION"<<endl;
    int choice;
    cout<<"Enter a function to use: "<<endl;
    cin>>choice;
    if (choice == 1)
    {
        int num1, num2;
        cout<<"Enter two numbers to sum: "<<endl;
        cin>> num1;
        cin>> num2;
        cout<<num1<<"+"<<num2<<" = "<<num1+num2<<endl;
        }
        
}