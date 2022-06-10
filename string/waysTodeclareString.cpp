#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str="MeRiyuuuuu";
    string str;
    getline(cin,str);
    cout<<str;
    // cin>>str;
    // cout<<str;
    string str1(5,'n');
    cout<<str1;//output nnnnn
    return 0;
}