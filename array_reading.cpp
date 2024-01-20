#include<iostream>

using namespace std;

int main(){
  cout<<"READ YOUR ARRAY"<<endl;
  int myArray[5]={21,24,25,26,28};
  int k=0;
  //initialization steps
  //{PRECONDITION} I
    while (k<5){
      //{I^A}
    cout<<myArray[k]<<endl;
    k++;
    //{I^!B}-->{Q}
    //TRUE SO THE CODE TERMINATES
  }
}
