/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
 #include<bits/stdc++.h>
TreeNode<int>* help(vector<int>&inOrder , int is , int ie , vector<int>&postOrder , int ps , int pe, map<int,int>&m)
{
     if(is>ie or ps>pe) return NULL;
     TreeNode<int>* root=new TreeNode<int>(postOrder[pe]);
     int ind=m[postOrder[pe]];
     int size=ind-is;
     root->left=help(inOrder , is , ind-1 , postOrder , ps , ps+size-1 , m);
     root->right=help(inOrder , ind+1 , ie ,postOrder , ps+size , pe-1 ,m);
     return root;
}

TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	// Write your code here.
     map<int , int>m;
     for(int i=0 ; i<inOrder.size() ; i++) m[inOrder[i]]=i;
     return help(inOrder , 0 , inOrder.size()-1 , postOrder , 0 , postOrder.size()-1 , m);
}
