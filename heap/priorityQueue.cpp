#include<bits/stdc++.h>
using namespace std;
int main(){
    //maxheap
    priority_queue<int> pq;
    pq.push(1);
     pq.push(2);
      pq.push(3);
       pq.push(4);
       cout<<pq.top()<<" "<<pq.size();
        //minheap
    priority_queue<int,vector<int>,greater<int>> min;
    min.push(5);
     min.push(7);
      min.push(3);
       min.push(4);
       cout<<min.top()<<" "<<min.size();
}