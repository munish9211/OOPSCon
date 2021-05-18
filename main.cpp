#include<iostream>
#include<bits/stdc++.h>
#include <stdlib.h>
#include<time.h>
using namespace std;
class board{
 int p1pos, p2pos;
 int dim;
 vector<int> snlb,snle;
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
  vector<int>::iterator it;
  it = std::find (snlb.begin(), snlb.end(), x);
  if(it != snlb.end()){
    int i = it - snlb.begin();
    if(p==1)
      p1pos = snle[i];
    else
      p2pos = snle[i];
  }
}
void sandl(){
 int i=0;
 while(i!=10)
  int start = rand()%(dim -1) + 1;
  int end = rand()%(dim -1) + 1;
  vector<int>::iterator it;
  it = std::find (snlb.begin(), snlb.end(), start); // to make sure no two ladder or snake has same starting point
  if(it == snlb.end()){
   snlb.push_back(start);
   snle.push_back(end);
   i++;
  }
  else 
   continue;
 }
}
int main(){
 board game1;
 srand(time(0));
 board game2(200);
}
