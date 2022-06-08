#include<iostream>
using namespace std;
int search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
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