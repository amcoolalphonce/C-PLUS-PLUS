#include<iostream>
using namespace std;
int largestInArray(int myArray , int size);// function prototype

int largestInArray[10] = {12,14,7,69, 32,44,34,100, 134, 35};

int largestInArray(){
	int size=10;
    int largestInArray=myArray[0];
for (int i=0; i<size;i++){
	if(myArray[i]>largestInArray){
	largestInArray=myArray[i];
	}
}
cout<<"THE LARGEST ELEMENT IN THE ARRAY"<<largestInArray;
};

int main()
{
  int largestInArray(int myArray, int size);
  cout<<largestInArray;

    return 0;
}
//try without function . hard code