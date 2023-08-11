#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "CASIO CALCULATOR" << endl;
    cout<<"LIST OF FUNCTIONS:"<<endl;
    cout<<"[1]SUMMATION"<<endl;
    cout<<"[2]SUBTRACTION"<<endl;
    cout<<"[3]MULTIPLICATION"<<endl;
    cout<<"[4]DIVISION"<<endl;
    cout<<"[5]MODULUS"<<endl;
    cout<<"[6]TRUNCUATE"<<endl;
    cout<<"[7]CEIL"<<endl;
    cout<<"[8]POWER"<<endl;
    cout<<"[9]COSINE"<<endl;
    cout<<"[10]SINE"<<endl;
    cout<<"[11]TANGENT"<<endl;
    cout<<"[12]LOGARITHM"<<endl;
    cout<<"[13]SQUAREROOT"<<endl;
    cout<<"[14]HYPERBOLIC TANGENT"<<endl;
    cout<<"[15]HYPERBOLIC COSINE"<<endl;
    cout<<"[16]HYPERBOLIC SINE"<<endl;
    cout<<"[17]NATURAL LOGARITHM"<<endl;
    cout<<"[18]SQUARE"<<endl;
    cout<<"[19]ROUNDING OFF"<<endl;
    cout<<"[20]INVERSE OF TANGENT"<<endl;
    cout<<"[21]INVERSE OF COSINE"<<endl;
    cout<<"[22]INVERSE OF SINE"<<endl;
    cout<<"[23]FLOOR"<<endl;
    cout<<"[24]CUBE"<<endl;

    cout<<endl;
    cout<<endl;
    cout<< "SELECT A FUNCTION TO USE:";
    int selectedFunction;
    cin >> selectedFunction;

    if(selectedFunction==1)//SUMMATION SELECTED
    {
        cout<<"ENTER TWO NUMBERS TO SUM:"<<endl;
        int Number1,Number2;
        cin>>Number1>>Number2;
        cout<<Number1<<"+"<< Number2<<"="<<(Number1+Number2)<<endl;
    }

    else if(selectedFunction==2)//SUBTRACTION SELECTED
    {
        cout<<"ENTER TWO NUMBERS TO SUBTRACT:"<<endl;
        int Number1,Number2;
        cin>>Number1>>Number2;
        cout<<Number1<<"-"<<Number2<<"=="<<(Number1-Number2)<<endl;
    }

    else if(selectedFunction==3)//MULTIPLICATION SELECTED
    {
        cout<<"ENTER TWO NUMBERS TO MULTIPLY:"<<endl;
        int Number1,Number2;
        cin>>Number1>>Number2;
        cout<<Number1<<"*"<<Number2<<"=="<<(Number1*Number2)<<endl;
    }

    else if (selectedFunction==4)//DIVISION SELECTED
    {
        cout<<"ENTER TWO NUMBERS TO DIVIDE:"<<endl;
        int Number1,Number2;
        cin>>Number1>>Number2;
        cout<<Number1<<"/"<<Number2<<"=="<<(Number1/Number2)<<endl;
    }

    else if(selectedFunction==5)//MODULUS SELECTED
   {
       cout<<"ENTER TWO NUMBERS TO FIND MODULUS:"<<endl;
        int Number1,Number2;
        cin>>Number1>>Number2;
        cout<<Number1<<"%"<<Number2<<"=="<<(Number1%Number2)<<endl;
   }

   else if(selectedFunction==6)//TRUNCATION SELECTED
   {
       cout<<"ENTER NUMBER TO FIND TRUNCUATE:"<<endl;
        double Number1;
        cin>>Number1;
        cout<<"The truncate of"<<Number1<<"is "<<trunc(Number1)<<endl;
   }

   else if(selectedFunction==7)//CEIL SELECTED
   {
       cout<<"ENTER NUMBER TO FIND CEIL:"<<endl;
        int Number1;
        cin>>Number1;
        cout<<"The ceil of"<<Number1<<"is"<<ceil(Number1)<<endl;
   }
}
//still underway coding