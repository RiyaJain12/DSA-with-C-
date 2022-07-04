#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int left = 2 * i +1;
    int right = 2 * i + 2;
    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
    void mergeHeaps(vector<int>  a, vector<int>  b)
    {
        vector<int> ans;
        for (auto i : a)
            ans.push_back(i);
        for (auto i : b)
            ans.push_back(i);
        int size=ans.size();
        for (int j = size/2-1; j >= 0; j--)
        {
            heapify(ans,size, j);
        }
        for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
     }
    }

int main(){
    vector<int> a={10,5,6,2};
    vector<int> b={12,7,9};
    mergeHeaps(a,b);
    return 0;
}