#include<iostream>
using namespace std;
int noOfone(int n){
    int count=0;
    while(n){
        n=n & (n-1);
        count ++;
    }
    return count;
}
int main(){
    cout<<noOfone(15)<<endl;
    return 0;
}