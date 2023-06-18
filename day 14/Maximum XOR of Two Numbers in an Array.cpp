#include <bits/stdc++.h> 
struct Node
{
    Node* links[2];
    bool contains(int bit)
    {
        return links[bit]!=NULL;
    }    
    Node* get(int bit)
    {
        return links[bit];
    }
    void put(int bit , Node* node)
    {
        links[bit]=node;
    }
};
class Trie
{
    public:
    Node* root;
    Trie()
    {
        root=new Node();
    }

    void insert(int n)
    {
        Node* node=root;
        for(int i=31 ; i>=0 ; i--)
        {
            int bit=(n>>i)&1;
            if(!node->contains(bit))
            {
                node->put(bit,new Node( ));
            }
            node=node->get(bit);
        }
    }

    int maxi(int n)
    {
        Node* node=root;
        int maxi=0;
        for(int i=31 ; i>=0 ; i--)
        {
            int bit=(n>>i)&1;
            if(node->contains(1-bit))
            {
                maxi=maxi|(1<<i);
                node=node->get(1-bit);
            }
            else
            {
                node=node->get(bit);
            }
        }
        return maxi;
    }
};
int maximumXor(vector<int> A)
{
    // Write your code here.   
    Trie trie;
    for(auto i : A) trie.insert(i);
    int ans=0;
    for(auto i : A)
    {
        ans=max(ans , trie.maxi(i));
    }
    return ans;
}
