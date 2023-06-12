/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     if(head==NULL) return head;
     if(head->next==NULL) return head;
     if(k==0) return head;
     int n=1;
     Node *curr=head;
     while(curr->next)
     {
          curr=curr->next;
          n++;
     }
     curr->next=head;
     k=k%n;
     k=n-k;
     while(k--)
     {
          curr=curr->next;
     }
     // return head;
     head=curr->next;
     curr->next=NULL;
     return head;

}
