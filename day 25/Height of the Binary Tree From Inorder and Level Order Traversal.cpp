#include <bits/stdc++.h> 
struct Node{
    int height;
    int leftIndex;
    int rightIndex;
};

int heightOfTheTree(vector<int>& inorder, vector<int>& levelOrder, int N){
    queue< Node > q;

    Node newNode;
    newNode.height = 0;
    newNode.leftIndex = 0;
    newNode.rightIndex = N - 1;

    q.push(newNode);
    int maxHeight = 0;
    
    map<int, int> m;
    for(int i=0; i<inorder.size(); i++){
        m[inorder[i]] = i;
    }

    for(int i = 0; i < N; i++){
        int curr = levelOrder[i];

        Node now = q.front();
        q.pop();

        int currPos = m[levelOrder[i]];
        
        if(currPos > now.leftIndex){
            Node newNode;
            newNode.height = now.height+1;

            maxHeight = max(maxHeight, newNode.height);

            newNode.leftIndex = now.leftIndex;
            newNode.rightIndex = currPos-1;
            q.push(newNode);
        }

        if(currPos < now.rightIndex){
            Node newNode;
            newNode.height=now.height+1;

            maxHeight = max(maxHeight, newNode.height);

            newNode.leftIndex = currPos+1;
            newNode.rightIndex = now.rightIndex;
            q.push(newNode);
        }
    }
    return maxHeight;
}
