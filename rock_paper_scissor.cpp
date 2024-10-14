//Rock paper and scissor game in c++

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

#define rock 1
#define paper 2
#define scissor 3

int main()
{
  srand((unsigned int)time(NULL));
  int you =0;
  int computer =0;
  bool draw = false;

  do{
    cout<<"Select your throw"<<endl;
    cout<<"1.Rock"<<endl;
    cout<<"2.paper"<<endl;
    cout<<"3.scissor"<<endl;
    cin>>you;
    cout<<endl;

    computer = (rand()%3)+1;
    if(computer==rock){
      cout<<"Computer has thrown rock"<<endl;
    }
    else if(computer== paper){
      cout<<"Computer has thrown paper"<<endl;
    }
    else if(computer == scissor){
      cout<<"computer has thrown scissor"<<endl;
    }

    draw = false;

    if(computer==you){
      draw = true;
      cout<<"Game is draw!Play again"<<endl;
    }
    else if(you== paper && computer == scissor){
      cout<<"You lose!"<<endl;
    }
    else if(you==paper && computer == rock){
      cout<<"You won!"<<endl;
    }
    else if(you==scissor && computer == paper){
      cout<<"You won!"<<endl;
    }
    else if(you==scissor && computer == rock){
      cout<<"You lose!"<<endl;
    }
    else if(you==rock && computer == paper){
      cout<<"You lose!"<<endl;
    }
    else if(you==rock && computer == scissor){
      cout<<"You won!"<<endl;
    }

  }while(draw);
  return 0;
}
