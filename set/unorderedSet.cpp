#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    for(auto i : s)
       cout<<i<<" ";
    s.erase(2);
    cout<<endl;
    cout<<s.size()<<endl;
    for(auto i : s)
       cout<<i<<" ";
    return 0;
}