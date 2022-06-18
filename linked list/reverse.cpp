#include<iostream>
using namespace std;
class node{
  public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }

};
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;


}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void reverse(node* head){
    node* prevPtr=NULL;
    node* currentPtr=head;
    node* nextPtr;
    while(currentPtr!=NULL){
        nextPtr=currentPtr->next;
        prevPtr=
        currentPtr=prevPtr->next;
    }
}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    cout<<endl;
    reverse(head);
    display(head);
    cout<<endl;