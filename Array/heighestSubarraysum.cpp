#include<iostream>
#include<climits>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//          for(int j=i;j<n;j++){
//              int sum=0;
//          for(int k=i;k<=j;k++){
//           sum+=arr[k];
//         }
//         maxSum=max(maxSum,sum);
//     }
//     }
//     cout<<maxSum;
//     return 0;
// }

//cummulative sum approch
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int cumSum[n+1];
//     cumSum[0]=0;
//     for(int i=1;i<=n;i++){
//             cumSum[i]=cumSum[i-1]+a[i-1];
//         }

//     int maxsum=INT_MIN;
//     for(int i=1;i<=n;i++){
//         int sum=0;
//         for(int j=0;j<i;j++){
//             sum=cumSum[i]-cumSum[j];
//             maxsum=max(maxsum,sum);
//         }
//     }
//     cout<<maxsum;
//     return 0;
// }

// O(n) approch
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currentsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    cout<<maxsum;
    return 0;
}