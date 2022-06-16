#include<iostream>
using namespace std;
void generateSubstr(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    generateSubstr(ros,ans);
    generateSubstr(ros,ans+ch);
    generateSubstr(ros,ans+to_string(code));
}
int main(){
   string s="AB";
   generateSubstr(s,"");
    return 0;
}