
Node *addTwoNumbers(Node *l1, Node *l2)
{
Node* ans = new Node();
Node* x=ans;
int carry=0;
while(l1 or l2 or carry)
{
    if(l1)
    {
        carry+=l1->data;
        l1=l1->next;
    }
    if(l2)
    {
        carry+=l2->data;
        l2=l2->next;
    }
    Node* temp=new Node(carry%10);
    ans->next=temp;
    ans=ans->next;
    carry/=10;
}
        return x->next;
}
