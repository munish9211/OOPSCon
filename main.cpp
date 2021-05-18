#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
class board{
 int p1pos, p2pos;
 int dim;
  
 int rolladie(); //
 void sandl();  //for fixing snakes and ladders 
 void checksol(int x,int p); //checking snake or ladder
 void game(){ //game runner
  sandl();
  int chance=1;
  while(p1pos!=dim || p2pos!=dim){
    if(chance==1){
      int curr=rolladie();
      if(curr+p1pos > dim);
      else 
        p1pos+=curr;
      checksol(p1pos,1);
    }
    else{
     int curr=rolladie();
     if(curr+p2pos > dim);
     else 
       p2pos+=curr;
     checksol(p2pos,2);
    }
    chance*=-1;
  }
  if(p1pos == dim)
    cout<<"Player 1 wins!\n";
  else
    cout<<"Player 2 wins!\n"
 }
 public:
 board(){   //constructor
  p1pos=0;
  p2pos=0;
  dim =100;
  cout<<"New Game Begins!\n";
  game();
 }
 board(int x){
  p1pos=0;p2pos=0;
  dim = x;
  cout<<"New Game Begins!\n";
  game();
 }
};
int board::rolladie(){
    return (rand()%6 + 1);
}
void board::checksol(int x,int p){
  
}
void sandl(){
  
}
int main(){
 board game1;
 srand(time(0));
 board game2(200);
}
