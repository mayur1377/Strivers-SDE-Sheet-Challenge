#include <bits/stdc++.h>
Node<int>* sortTwoLists(Node<int>* l1, Node<int>* l2)
{
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;
    if(l1->data<l2->data)
    {
        l1->next=sortTwoLists(l1->next , l2); 
    }
    else
    {
        l2->next=sortTwoLists(l1 , l2->next);
    }
}
// tc: o(m+n) sc: o(1);
// / bf approach, will be something like make a whole new list , then have tp approach to it
