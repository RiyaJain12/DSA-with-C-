#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int> a(n);
     for(auto &i : a)
       cin>>i;
    int zerocnt=0,ans=0,i=0;
    for(int j=0;i<n;j++){
        if(a[j]==0){
            zerocnt++;
        }
        if(zerocnt>k){
            if(a[i]==0){
                zerocnt--;
            }
            i++;
                }
        ans=max(ans,j-i+1);
    }
    cout<<ans;
    return 0;
}