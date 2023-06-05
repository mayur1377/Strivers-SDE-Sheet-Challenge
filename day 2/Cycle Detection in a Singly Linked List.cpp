bool detectCycle(Node *head)
{
   Node*slow=head;
   Node* fast=head;
   while(fast and fast->next)
   {
       slow=slow->next;
       fast=fast->next->next;
       if(slow==fast) return 1;
   }
   return 0;
}
// basically hare and tortoise approach o(n)
