#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
Node* help(Node*head , int i , int n , int b[])
{
	if(head==NULL) return NULL;
	if(i>=n) return head;
	if(b[i]==0) return help(head , i+1 , n , b);
	int count=0;
	Node*prev=NULL;
	Node* curr=head;
	Node*next;
	while(curr)
	{
		curr=curr->next;
		count++;
	}
	// if less number of nodes are prsent
	if(count<b[i])
	{
		curr=head;
		while(curr)
		{
			next=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next;
		}
		return prev;
	}
	count=0;
	curr=head;
	while(count<b[i] and curr)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
		count++;
	}
	if(next) head->next=help(next , i+1 ,n , b);
	// head=prev;
	return prev;


}
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
	if(head==NULL) return head;
	return help(head , 0 , n , b);
}
