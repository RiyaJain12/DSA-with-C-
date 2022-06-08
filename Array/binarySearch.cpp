#include<iostream>
using namespace std;
int search(int arr[],int n,int key){
    int s=1;
    int e=n;
    while(s<=e){
       int mid=(s+e)/2;
       if(arr[mid]==key){
           return mid;
       }
       else if(arr[mid]>key){
           e=mid-1;
       }
       else {
           s=mid+1;
       }
    }
    return -1;
}
int main(){
    int n,key;
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to search"<<endl;
    cin>>key;
    int index=search(arr,n,key);
    cout<<"The index for the key is "<<index;
    return 0;
}