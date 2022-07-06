#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    //creation
    map<string,int> m;
    //inserrtion
    //1
    pair<string,int> p=make_pair("babbar",3);
    m.insert(p);
    //2
    pair<string,int> q("love",2);
     m.insert(q);
    //3
    m["mera"]=2;
    //updation
    m["mera"]=1;
    //Search
    cout<<m["mera"]<<" "<<m.at("babbar")<<" ";
    //error cout<<m.at("xyz");
    cout<<m["xyz"]<<" ";
    cout<<m.at("xyz")<<endl;
    cout<<m.size()<<" ";
    //to check presence
    cout<<m.count("bro")<<" ";
    cout<<m.count("love")<<endl;
    //erase
    m.erase("love");
    cout<<m.size()<<endl;
    for(auto i: m){
        cout<<i.first<<i.second<<" ";
    }cout<<endl;
    //iterator
    map<string,int> :: iterator it=m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}