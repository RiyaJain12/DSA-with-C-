#include<bits/stdc++.h>
using namespace std;
// int kthlargest(int arr[],int k,int n){
//     vector<int> sumStore;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             sumStore.push_back(sum);
//         }
//     }
//     sort(sumStore.begin(),sumStore.end());
//     return sumStore[sumStore.size()-k];
// }
//Optimize Approach
int kthlargest(int arr[],int k,int n){
    priority_queue<int,vector<int>,greater<int>> mini;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(mini.size()<k){
              mini.push(sum);
            }
            else{
                if(sum>mini.top()){
                    mini.pop();
                    mini.push(sum);
                }
            }
        }
    }
    return mini.top();
}
int main(){
    int arr[]={1,2,4,8,9};
    int k=4;
    cout<<kthlargest(arr,k,5);
    return 0;
}