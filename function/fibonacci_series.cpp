#include<iostream>
using namespace std;
void fib(int n){
    int p=0;
    int q=1;
    int nextTerm;
    for(int i=0;i<n;i++){
        cout<<p<<" ";
       nextTerm=p+q;
       p=q;
       q=nextTerm;
    }
}
int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}