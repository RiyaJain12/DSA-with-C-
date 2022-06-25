#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> pq;
    pq.push_back(1);
    pq.push_back(2);
    pq.push_front(3);
    pq.push_front(4);
    for(auto i : pq){
        cout<<i<<" ";
    }
    cout<<endl;
    pq.pop_back();
    pq.pop_front();
     for(auto i : pq)
        cout<<i<<" ";
     cout<<endl;
    cout<<pq.size();
    return 0;
}