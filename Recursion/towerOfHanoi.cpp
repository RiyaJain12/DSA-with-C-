#include<iostream>
using namespace std;
void ToH(int n,char src,char dest, char helper){
    if(n==0){
        return;
    }
   ToH(n-1,src,helper,dest);
   cout<<"Move from "<<src<<" to "<<dest<<endl;
   ToH(n-1,helper,dest,src);
}
int main(){
    ToH(3,'A','C','B');
    return 0;
}