#include <bits/stdc++.h>  
int findCeil(BinaryTreeNode<int> *node, int x)
{    auto curr = node;    
    int ceil = -1;    
    while(curr)
    {        
        if(curr->data == x)
        {          
              ceil = curr->data;         
              return ceil;        
        }     
        if(x>curr->data)
        {          
            curr=curr->right;        
        }      
        else 
        {    
            ceil = curr->data;         
            curr = curr->left;       
        }   
    }   
    return ceil;    
 }
