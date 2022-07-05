#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    int i;
    int j;
    node(int data,int row,int col){
       this->data=data;
       i=row;
       j=col;
    }
};
class compare{
    public:
    bool operator()(node* a,node* b){
        return a->data > b->data;
    }
}
vector<int> mergeArrays(vector<vector<int>>&arr,int k){
    priority_queue<node*,vector<node*>,compare> minHeap; 
    for(int i=0;i<k;i++){
        node* temp=new node(arr[i][0],i,0);
        minHeap.push(temp);
    }
    vector<int> ans;
    while(minHeap.size()>0){
        node* tmp=minHeap.top();
        ans.push_back(temp->data);
        minHeap.pop();
        int i=temp->i;
        int j=temp->j;
        if(j+1<kArrays[i].size()){
            node* next=new node(arr[i][j+1],i,j+1);
            minHeap.push(next);
        }

    }
     return ans;
}