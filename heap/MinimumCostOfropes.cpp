#include<bits/stdc++.h>
using namespace std;
int minCost(int arr[],int n){
    priority_queue<int,vector<int>,greater<int>> pq;
    int cost=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    while(pq.size()>1){
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        int sum=a+b;
        cost+=sum;
        pq.push(sum);
    }
    return cost;
}

int main(){
    int arr[]={4,3,2,6};
    cout<<minCost(arr,4);
    return 0;
}