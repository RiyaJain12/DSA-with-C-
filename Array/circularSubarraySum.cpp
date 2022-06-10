#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n){
  int currentsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int nowrapsum;
    int wrapsum;
    nowrapsum=kadane(arr,n);
    int totalSum=0;
    for(int i=0;i<n;i++){
       totalSum+=arr[i];
       arr[i]=-arr[i];
    }
    wrapsum=totalSum+kadane(arr,n);
    cout<<max(wrapsum,nowrapsum);
    return 0;
}