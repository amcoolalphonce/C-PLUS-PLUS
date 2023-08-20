#include<iostream>
using namespace std;
int main()
{
        char unit;
        double temeperature;
        cout<<"Enter the temperature unit you want to convert: C for Celsius or F for Fahrenheit:  "<<endl;
        cin>>unitr;

        if (unit == 'F' || unit == 'f') 
        {
                cout << "Enter the temperature in Fahrenheit: ";
                cin >> temperature;

                // Convert Fahrenheit to Celsius
                double celsius = (temperature - 32) * 5 / 9;
        }
        else if (unit == 'C' || unit == 'c') 
        {
                cout << "Enter the temperature in Celsius: ";
                cin >> temperature;
                double fahrenheit = (temperature * (9/5) + 32);
                cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << endl;
       } 
       else
       {
        cout<<"Invalid unit! Please enter 'F' or 'C' "<<endl;
       }
       return 0;
}