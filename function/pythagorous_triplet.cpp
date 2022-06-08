#include<iostream>
#include<math.h>
using namespace std;
bool check(int p,int q,int r){
    int a,b,c;
    a=max(p,max(q,r));
    if(a==p){
      b=q;
      c=r;
    }
    else if(a==q){
      b=p;
      c=r;
    }
     else{
      b=p;
      c=q;
    }
    if(a*a==b*b+c*c){
       return true;
    }
return false;
}
int main(){
    int p,q,r;
    cin>>p>>q>>r;
    if(check(p,q,r)){
        cout<<"pythagorous triplets";
    }
    else cout<<"Not a pythagorous triplets";
    return 0;
}