#include<iostream>
#include<stdlib.h>   //for srand
#include<ctime>

using namespace std;
int main(){
  srand (time(NULL));
  int number=rand()%100+1;
  int guess=0;
  cout<<number<<endl;// gives the number to guesse;

    do{
      cout<<"Guess a number between 1and 100:"<<endl;
      cin>>guess;
        if(guess>number){
          cout<<"Too high"<<endl;
        }
        else if(guess<number){
          cout<<"Too low"<<endl;
        }
        else{
          cout<<"CORRECT !!!"<<endl;
          exit(0);
        }
    }while (number!=guess);
  return 0;
}
