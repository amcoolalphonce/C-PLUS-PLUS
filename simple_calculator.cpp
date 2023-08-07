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
        if (choice == 2)
    {
        int num1, num2;
        cout<<"Enter two numbers to subtract: "<<endl;
        cin>> num1;
        cin>> num2;
        cout<<num1<<"-"<<num2<<" = "<<num1-num2<<endl;
    }
    if (choice == 3)
    {
        float num1;
        float num2;
        cout<<"Enter two numbers to divide: "<<endl;
        cin>>num1;
        cin>>num2;
        cout<<num1<<"/"<<num2<<" = "<<num1/num2<<endl;
    }
    if (choice == 4) //MULTIPLICATION SELECTED
    {
        float num1;
        float num2;
        cout<<"Enter two numbers to multiply: "<<endl;
        cin>>num1;
        cin>>num2;
        cout<<num1<<"*"<<num2<<" = "<<num1*num2<<endl;
    }
     else
    {
        cout<<"Invalid choice. Try again."<<endl;
    }
    return 0;
}
