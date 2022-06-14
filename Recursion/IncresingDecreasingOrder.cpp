#include<iostream>
using namespace std;
void decr(int n){
    if(n==0){
      return;
    }
    cout<<n<<" ";
    
    decr(n-1);
}
void incr(int n){
     if(n==0){
      return;
    }
    incr(n-1);
    cout<<n<<" ";
}
int main(){
int n;
cin>>n;
incr(n);
cout<<endl;
decr(n);
return 0;
}