//Guess the number 

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
  srand((unsigned int)time(NULL));
  int number = (rand() % 100)+1;
  int guess=0;

  do{
    cout<<"Guess the number between 1 to 100"<<endl;
    cin>>guess;

    if(guess>number){
      cout<<"Guess a lower number"<<endl;
    }
    else if(guess<number){
      cout<<"Guess a higher number"<<endl;
    }
    else{
      cout<<"Your guess is correct!You won"<<endl;
    }

  }while(guess!=number);
  return 0;
}