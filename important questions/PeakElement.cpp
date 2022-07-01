#include<iostream>
using namespace std;
int peak(int arr[],int n,int high,int low){
    int mid=(low+high)/2;
    if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1])){
        return mid;
    }
    else if(mid>0 && arr[mid-1]>arr[mid]){
        return peak(arr,n,mid-1,low);
    }
    else{
        return peak(arr,n,high,mid+1);
    }
}
int main(){
    int arr[]={0,6,8,5,7,9};
    int n=6;
    cout<<peak(arr,n,n-1,0);
    return 0;
}