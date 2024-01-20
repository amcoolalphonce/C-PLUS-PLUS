#include<iostream>
#include<stdlib.h>   //for srand
#include<ctime>

using namespace std;
int main(){
  srand (time(NULL));
  int number=rand()%100+1;
  int guess=0;
  cout<<number<<endl;// gives the number to guesse;
