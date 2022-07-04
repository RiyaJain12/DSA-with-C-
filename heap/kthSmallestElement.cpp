#include<bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[],int n,int k){
    priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    int ans=pq.top();
    return ans;
}
int main(){
    int arr[]={7,10,4,20,15};
    int n=5;
    cout<<kthSmallest(arr,n,4);
    return 0;
}