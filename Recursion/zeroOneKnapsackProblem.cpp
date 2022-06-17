//Put n items with given weight and value in a knapsack of capacity W to gte minimum total value in a snapsap!
#include<iostream>
using namespace std;
int knapsack(int val[],int wgt[],int W,int n){
  if(n==0 ||W==0){
    return 0;
  }
  if(wgt[n-1]>W){
     knapsack(val,wgt,W,n-1);
  }
  return max( knapsack(val,wgt,W-wgt[n-1],n-1)+val[n-1], knapsack(val,wgt,W,n-1));
}
int main(){
      int val[]={100,50,150};
      int wgt[]={10,20,30};
      int W=50;
      cout<<knapsack(val,wgt,W,3);
    return 0;
}