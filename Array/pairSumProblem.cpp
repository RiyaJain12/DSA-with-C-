//check whether the sum of any 2 element of array is equal to the given sum k
#include<iostream>
using namespace std;
bool pairsum(int arr[],int n,int k){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(arr,8,k);
    cout<<" Another Approach";
    int st=0;
    int ed=7;
    int a;
    while(st<=ed){
      a=(arr[st]+arr[ed]);
      if(a==k){
        cout<<st<<" "<<ed;
        return 0;
      }
     else if(a>k){
          ed--;
      }
      else {
       st++;}
    }
    return 0;
}