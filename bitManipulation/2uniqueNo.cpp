//whwn two unique no. in an array
#include<iostream>
using namespace std;
int Setbit(int n,int pos){
      return ((n & (1<<pos))!=0);}
void unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum^=arr[i];
    }
    int temp=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxorsum=0;
    for(int i=0;i<n;i++){
       if(Setbit(arr[i],pos-1)){
           newxorsum^=arr[i];
       }
    }
    cout<<newxorsum<<endl;
    cout<<(newxorsum ^ temp);
}
int main(){
    int arr[]={1,2,3,4,5,1,2,3};
    unique(arr,8);
    return 0;
}