#include <iostream>
// this code serves to draw a diamond shape in c++
using namespace std;
int main()
{
        int i, j,  rows;
        cout<<"Enter the numbe rof rows for your diamond"<<endl;
        cin>>rows;
        for(i = 0; i <= rows; i++)
        {
                for(j = 1; j <= rows - 1; j++ )
                {
                        cout<<" ";
                }
                for(j = 1; j<=2*i-1; j++)
        }
}