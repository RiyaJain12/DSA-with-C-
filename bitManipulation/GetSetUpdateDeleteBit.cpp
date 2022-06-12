#include<iostream>
using namespace std;
  int getbit(int n,int pos){
      if((n & (1<<pos))!=0){
          return 1;
      }
      return 0;
  }
 int Setbit(int n,int pos){
      return (n | (1<<pos));
  }
  int clearBit(int n,int pos){
      int mask=~((1<<pos));
      return (n & mask);
  }
   int updateBit(int n,int pos,int value){
      int mask=~((1<<pos));
      n= (n & mask);
       return (n | (value<<pos));
  }
int main(){
     cout<<getbit(5,2)<<endl;
     cout<<Setbit(5,1)<<endl;
     cout<<clearBit(5,0)<<endl;
     cout<<updateBit(5,1,1)<<endl;
    return 0;
}
