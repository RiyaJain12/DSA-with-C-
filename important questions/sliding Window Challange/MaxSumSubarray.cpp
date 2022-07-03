//Max sum subarray of size k with sum less than X
#include<bits/stdc++.h>
using namespace std;
void sum(int arr[],int n,int k,int x){
    int ans=0,sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    if(sum<x){
            ans=max(ans,sum);
        }
    for(int i=k;i<n;i++){
        sum=sum-arr[i-k];
        sum=sum+arr[i];
        if(sum<x){
            ans=max(ans,sum);
        }
    }
    cout<<ans;
}
int main(){
    int arr[]={7,5,4,6,8,9};
    int n=6;
    int k=3;
    int x=20;
    sum(arr,n,k,x);
    return 0;
}