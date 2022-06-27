#include<bits/stdc++.h>
using namespace std;
struct Node{
   int data;
   struct Node* left;
   struct Node* right;
   Node(int val){
    data=val;
    left=NULL;
    right=NULL;
   }
};
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
//time complexity O(n^2);
// bool isBalance(Node* root){
//     if(root==NULL){
//         return true;
//     }
//     if(isBalance(root->left)==false){
//         return false;
//     }
//     if(isBalance(root->right)==false){
//         return false;
//     }
//     int lh=height(root->left);
//     int rh=height(root->right);
//     if(abs(lh-rh)<=1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

//time complexity O(n);
bool isBalance(Node* root,int *height){
     if(root==NULL){
        return true;
    }
    int lh=0;
    int rh=0;
     if(isBalance(root->left,&lh)==false){
         return false;
     }
     if(isBalance(root->right,&rh)==false){
        return false;
    }
     *height=max(lh,rh)+1;
if(abs(lh-rh)<=1){
        return true;
  }
 else{
      return false;
    }
}
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    // root->right=new Node(3);
    root->left->left=new Node(4);
    // root->left->right=new Node(5);
    // root->right->left=new Node(6);
    // root->right->right=new Node(7);
    int h=0;
    if(isBalance(root,&h)){
        cout<<"True";
    }
    else{
        cout<<"false";
    }
    return 0;
}