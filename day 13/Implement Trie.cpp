/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

#include<bits/stdc++.h>
class trie{
    public:
    vector<trie*>child;
    bool isend;
    trie()
    {
        child.resize(26 , NULL);
        isend=false;
    }
    ~trie(){}
    void add(string s)
    {
        trie *c=this;
        for(int i=0  ;i<s.size() ; i++)
        {
            if(!c->child[s[i]-'a']) c->child[s[i]-'a']=new trie();
            c=c->child[s[i]-'a'];
        }
        c->isend=true;
    }

    bool find(string s)
    {
        trie*c=this;
        for(int i=0  ;i<s.size() ; i++)
        {
            if(!c->child[s[i]-'a']) return false;
            c=c->child[s[i]-'a'];
        }
        return c->isend;
    }

    bool startswith(string s)
    {
        trie *c=this;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(!c->child[s[i]-'a']) return false;
            c=c->child[s[i]-'a'];
        }
        return true;
    }
};



class Trie {

public:

    trie* root;
    /** Initialize your data structure here. */
    Trie() {
        root=new trie();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        root->add(word);
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        return root->find(word);

    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        return root->startswith(prefix);
    }
};
