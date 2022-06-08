#include<iostream>
#include<math.h>
using namespace std;
// 1
// 11
// 121
// 1331
// 14641
int fact(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    return a;
}
int main(){
    int r;
    cin>>r;
    for (int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j));
        }
        cout<<endl;
    }
    return 0;
}