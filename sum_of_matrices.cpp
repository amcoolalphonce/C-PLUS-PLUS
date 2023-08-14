#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    int rows, columns, j, i;
    int one[columns][rows], two[columns][rows];

    cout<<"Enter the number of rows of the matrix \n";
    cin>>rows;
    cout<<"\nEnter the number of columns of the matrix \n";
    cin>>columns;

    int sum[rows][columns];

    sum[2][2]={{2,2},{2,2}};
    sum[rows][columns]={}

    for(i=0;i<rows;i++)for(j=0;j<columns;j++)
    {
        cin>>one[i][j];
    }
    //note that since we are adding the dimension of matrix ONE==TWO
    cout<<"Enter matrix two members"<<endl;
    for(i=0;i<rows;i++) for(j=0;j<columns;j++)
}