#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
Node* sortedArrToBST(int arr[],int start,int end){
    if(start>end){
        return NULL;
    }
    int mid=(start+end)/2;
    Node* root=new Node(arr[mid]);
    root->left=sortedArrToBST(arr,start,mid-1);
    root->right=sortedArrToBST(arr,mid+1,end);
    return root;
}
int main(){
    int arr[]={10,20,30,40,50};
    Node* root=sortedArrToBST(arr,0,4);
    preorder(root);
    cout<<endl;
    return 0;
}