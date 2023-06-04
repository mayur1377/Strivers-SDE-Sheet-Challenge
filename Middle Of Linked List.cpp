Node *findMiddle(Node *head) {
    if(head==NULL) return head;
    auto  *slow= head;
    auto *fast=head;
    while(fast and fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

