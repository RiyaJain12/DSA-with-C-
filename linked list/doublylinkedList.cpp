#include<iostream>
using namespace std;
class node{
   public:
   int data;
   node* next;
   node* prev;
   node(int val){
    data=val;
    next=NULL;
    prev=NULL;
   }
};
void insertAthead(node* &head,int val){
     node* n=new node(val);
     n->next=head;
     if(head!=NULL){
        head->prev=n;
     }
     
     head=n;
}
void insertAtTail(node* &head,int val){
    if(head==NULL){
        insertAthead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void deletehead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}
void deletenode(node* &head,int pos){
    if(pos==1){
        deletehead(head);
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
    temp->next->prev=temp->prev;
    }
    delete temp;
}
int main(){
     node* head=NULL;
     insertAtTail(head,4);
     insertAtTail(head,7);
     insertAthead(head,9);
     display(head);
     deletenode(head,2);
     display(head);
      return 0;
}