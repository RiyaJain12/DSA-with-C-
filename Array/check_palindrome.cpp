#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool chk=1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-i-1]){
            chk=0;
            break;
        }
    }
    if(chk==0){
        cout<<"word is not a palindrome";
    }
    else{
        cout<<"word is a palindrome";
    }

    return 0;
}