#include<iostream>
using namespace std;
void generateSubstr(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    generateSubstr(ros,ans);
    generateSubstr(ros,ans+ch);
}
int main(){
   string s="ABC";
   generateSubstr(s,"");
    return 0;
}