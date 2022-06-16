#include<iostream>
using namespace std;
string removeDup(string s){
      if(s.length()==0){
        return "";
      }
      char ch=s[0];
      string ans=removeDup(s.substr(1));
      if(ans[0]==ch){
        return ans;
      }
    return ch+ans;
      
    
}
int main(){
    cout<<removeDup("aaaaabbbcccdddeeee");
    return 0;
}