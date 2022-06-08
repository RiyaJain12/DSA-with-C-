#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,maxNo,minNo,array[n];
    cin>>n;
    maxNo=INT_MIN;
    minNo=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        maxNo=max(maxNo,array[i]);
        minNo=min(minNo,array[i]);
    }
    cout<<"min is :"<<minNo<<" max is :"<<maxNo;
    return 0;
}