#include<iostream>
using namespace std;
int subset(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
int main(){
    int arr[3]={1,2,3};
    subset(arr,3);
    return 0;
}