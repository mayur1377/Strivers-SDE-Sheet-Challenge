
void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    if(node==NULL) return ;
    if(node->next==NULL) 
    {
        node=NULL;
        return ;
    }
    node->data=node->next->data;
    LinkedListNode<int> *temp=node->next;
    node->next = temp->next;
}
