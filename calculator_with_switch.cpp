#include <iostream>
using namespace std;

int main()
{
        //simple calculator using switch case
        char op;
        int a = 40;
        int b = 20;
        cout<<"Enter an Operator "<<endl;
        cin>>op;
        switch(op)
        {
                case '+':
                cout<<a+b;
                case '-':
                cout<<a-b;
                case '*':
                cout<<a*b;
                case '/':
                cout<<a/b;
                break;
                default:
        }
}