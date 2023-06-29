#include <bits/stdc++.h>
pair<int, pair<int, int>> getLargestBST(TreeNode<int>* root)
{
   if(root == NULL)
     return {0, {0, 0}};
   auto left = getLargestBST(root->left);
   auto right = getLargestBST(root->right);
   
   if(left.first == 0 and right.first == 0)
     return {1, {root->data, root->data}};
   else if(left.first == 0)
   {
       if(right.second.first == -1)
           return {right.first, {-1, -1}};
       else if(root->data < right.second.second)
           return {1 + right.first, {right.second.first, root->data}};
       return {right.first, {-1, -1}};
   }
   else if(right.first == 0)
   {
       if(left.second.first == -1)
           return {left.first, {-1, -1}};
       else if(root->data > left.second.first)
           return {1 + left.first, {root->data, left.second.second}};
       return {left.first, {-1, -1}};
   }
   if(left.second.first == -1 || right.second.first == -1)
       return {max(left.first, right.first), {-1, -1}};
   else if(root->data > left.second.first and root->data < right.second.second)
       return {left.first + right.first + 1, {right.second.first, left.second.second}};
   return {max(left.first, right.first), {-1, -1}};
}
int largestBST(TreeNode<int>* root) 
{
   return getLargestBST(root).first;
}
