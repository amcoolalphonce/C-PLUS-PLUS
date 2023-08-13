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

    else if(selectedFunction==8)//POWER SELECTED
   {
    cout<<"ENTER NUMBERS TO FIND POWER:"<<endl;
    int exponent;
    float base,result=1;
    cout<< "enter base and exponent respectively"<<endl;
    cin>> base,exponent;
    cout<<base<<"^"<< exponent <<"is"<< pow(base,exponent)<<endl;
    while (exponent!=1)
    {
        result*=base;--exponent;
    }
   }

   else if(selectedFunction==9)//COSINE SELECTED
   {
       cout<<"Enter the angle:"<<endl;
        int Number1;
        cin>>Number1;
        cout<< "cos" << Number1 <<" = "<< cos(Number1) <<endl;
   }

   else if(selectedFunction==10)//SINE SELECTED
   {
       cout<<"Enter the angle:"<<endl;
        int Number1;
        cin>>Number1;
        cout<< "sin" << Number1 <<" = "<< sin(Number1) <<endl;
   }

   else if(selectedFunction==11)//TANGENT SELECTED
   {
       cout<<"Enter the angle:"<<endl;
        int Number1;
        cin>>Number1;
        cout<< "tan" << Number1 <<" = "<< tan(Number1) <<endl;
   }

    else if(selectedFunction==12)//LOGARITHM SELECTED
   {
       cout<<"Enter the value to whose logarithm to base 10 you want:"<<endl;
        int Number1;
        cin>>Number1;
        cout<< "The logarithm to Base-10 of" << Number1 <<"is"<< log(Number1) <<endl;
   }

   else if(selectedFunction==13)//SQUAREROOT SELECTED
   {
       cout<<"Enter the Number:"<<endl;
        int Number1;
        cin>>Number1;
        cout<< "squareroot" << Number1 <<" = "<< sqrt(Number1) <<endl;
   }

   else if(selectedFunction==14)//HYPERBOLIC TANGENT SELECTED
   {
       cout<<"Enter the angle:"<<endl;
        int Number1;
        cin>>Number1;
        cout<< "Hyperbolic tangent of" << Number1 << "is" <<tanh(Number1)<<endl;
   }

   else if(selectedFunction==15)//HYPERBOLIC COSINE SELECTED
   {
       cout<<"Enter the angle:"<<endl;
        int Number1;
        cin>>Number1;
        cout<< "Hyperbolic cosine of" << Number1 << "is" <<cosh(Number1)<<endl;
   }
//Hyperbolic sine
   else if(selectedFunction==16)//HYPERBOLIC SINE SELECTED
   {
       cout<<"Enter the angle:"<<endl;
        int Number1;
        cin>>Number1;
        cout<< "Hyperbolic sine of" << Number1 << "is" <<sinh(Number1)<<endl;
   }
//natural logarithm
    else if(selectedFunction==17)//NATURAL LOGARITHM SELECTED
   {
       cout<<"Enter the value to whose natural logarithm you want:"<<endl;
        double Number1;
        cin>>Number1;
        cout<< "The natural logarithm value (base-e) of" << Number1<< "is"<<log(Number1)<<endl;
   }
//base 10
   {
       cout<<"Enter the value to whose  logarithm base 10 you want:"<<endl;
        double Number1;
        cin>>Number1;
        cout<< "The logarithm value (base-10) of" <<Number1<< "is"<<log(Number1)<<endl;
   }
}
//still underway coding