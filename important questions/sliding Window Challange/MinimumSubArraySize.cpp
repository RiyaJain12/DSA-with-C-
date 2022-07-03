//subarray of min size with sum greater than X !!
#include<bits/stdc++.h>
using namespace std;
void smallestsize(int arr[],int n,int x){
    int ans=n+1,sum=0,start=0,end=0;
    while(end<n){
        while(end<n && sum<=x){
            sum+=arr[end++];
        }
        while(sum>x && start<n){
            if((end-start)<ans){
                ans=end-start;
            }
            sum-=arr[start++];
        }
    }
    cout<<ans;
}
int main(){
    int arr[]={1,4,45,6,10,19};
    int n=6;
    int x=51;
    smallestsize(arr,n,x);
    return 0;
}