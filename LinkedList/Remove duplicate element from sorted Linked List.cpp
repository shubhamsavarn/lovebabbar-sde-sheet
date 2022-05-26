Node *removeDuplicates(Node *head)
{
    if(head == NULL){
        return NULL;
    }
    Node* curr = head;
    while(curr != NULL){
        if(curr->next != NULL and curr->data == curr->next->data){
            Node* next_next = curr->next->next;
            Node* todelete = curr->next;
            delete(todelete);
            curr->next = next_next;
        }else{
            curr = curr->next;
        }
    }
    return head;
 // your code goes here
}
