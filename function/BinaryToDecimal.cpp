#include<iostream>
#include<math.h>
using namespace std;

int binaryToDecimal(int n){
    int ans=0;
    int x=1;
    int y;
    while(n>0){
        y=n%10;
        ans+=x*y;
        x*=2;
        n=n/10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int ans=binaryToDecimal(n);
    cout<<ans;
    return 0;
}