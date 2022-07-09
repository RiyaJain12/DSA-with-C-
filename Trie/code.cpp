#include<bits/stdc++.h>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};
class Trie{
    public:
    TrieNode* root;
    Trie(){
        root=new TrieNode('\0');
    }
    void insertUtils(TrieNode* root,string word){
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }
        int index=word[0]-'A';
        TrieNode* child;
        if(root->children[index]!=NULL){
           child=root->children[index];
        }
        else{
          child=new TrieNode(word[0]);
          root->children[index]=child;
        }
        insertUtils(child,word.substr(1));
    }
    void insertWord(string word){
        insertUtils(root,word);
    }
    bool searchUtils(TrieNode* root,string word){
          if(word.length()==0){
             return root->isTerminal;
          }
          int index=word[0]-'A';
          TrieNode* child;
          if(root->children[index]!=NULL){
            child=root->children[index];
          }
          else{
            return false;
          }
    return searchUtils(child,word.substr(1));
    }
    bool searchWord(string word){
       return searchUtils(root,word);
    }
};
int main(){
      Trie *t=new Trie();
      t->insertWord("ABCD");
      t->insertWord("DO");
      t->insertWord("TIME");
    //   cout<<"Present or Not"<< t->searchWord("abcd")<<" ";
      if(t->searchWord("TIM")){
        cout<<true;
      }
      cout<<"false";
      return 0;
}