#include <iostream>
#include <algorithm>
using namespace std;
bool isFeasible(int mid,int arr[],int n,int k){
    int pos=arr[0];
    int element=1;
    for(int i=1;i<n;i++){
        if((arr[i]-pos)>=mid){
            pos=arr[i];
            element++;
            if(element==k){
                return true;
            }
        }
    }
    return false;
}
int largestMinDistance(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int result = -1;
    int start = 1;
    int end = n - 1;
    while (start < end)
    {
        int mid = (start + end) / 2;
        if(isFeasible(mid,arr,n,k)){
            result=max(result,mid);
            start=mid+1;
        }
        else{
          end=mid;
        }
    }
    return result;
}
int main()
{
    int arr[]={1,2,8,4,9};
    int n=5;
    int k=3;
    cout<<largestMinDistance(arr,n,k);
    return 0;
}