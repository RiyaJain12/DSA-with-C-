#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin>>arr[i][j];
        }
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(arr[i][j]==k){
               cout<<"element found at"<<i<<j; 
           }
        }
    }
    return 0;
}