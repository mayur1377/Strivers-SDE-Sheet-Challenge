LinkedListNode<int> *reverse(LinkedListNode<int> *head) 
{
    LinkedListNode<int>* prev=NULL;
    LinkedListNode<int>* curr=head;
    LinkedListNode<int>* forward=NULL;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    auto *slow=head , *fast=head;
    while(fast and fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    slow=reverse(slow);
    while(head and slow)
    {
        if(head->data!=slow->data) return 0;
        head=head->next;
        slow=slow->next;
    }
    return 1;
}
// o(n) , sc o(1);
