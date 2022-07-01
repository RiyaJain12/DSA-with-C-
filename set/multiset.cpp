#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    for(auto i : s)
       cout<<i<<" ";
    // s.erase(2);
    s.erase(s.find(2));
    cout<<endl;
    cout<<s.size()<<endl;
    for(auto i : s)
       cout<<i<<" ";
    return 0;
}