Node* findIntersection(Node* head1, Node* head2)
{
    Node *p1=head1;
    Node *p2=head2;
    Node *head=NULL;
    Node *curr=NULL;
    
    while(p1 and p2)
    {
        if(p1->data==p2->data)
        {
            if(head==NULL)
            {
                Node*temp=new Node(p1->data);
                head=temp;
                curr=temp;
            }
            else{
                Node*temp=new Node(p1->data);
                curr->next=temp;
                curr=temp;
            }
             p1=p1->next;
             p2=p2->next;
        }
       else{
           if(p1->data>p2->data)
           {
                p2=p2->next;
           }
           else
                p1=p1->next;
       }
    }
    return head;
}
