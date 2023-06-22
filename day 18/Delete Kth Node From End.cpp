Node* removeKthNode(Node* head, int k)
{auto slow=head , fast=head;
while(k-- and fast) fast=fast->next;
if(fast==NULL) 
{
    head=head->next;
    return head;
}
while(fast and fast->next)
{
    fast=fast->next;
    slow=slow->next;
}
slow->next=slow->next->next;
return head;
}
