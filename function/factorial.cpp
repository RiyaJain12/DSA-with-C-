#include<iostream>
#include<math.h>
using namespace std;

int fact(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans;
    return 0;
}