class Solution
{
    public:
    Node* detectloop(Node* head){
        if(head == NULL){
            return NULL;
        }
        Node* slow = head;
        Node* fast = head;
        while(slow != NULL and fast != NULL){
            fast = fast->next;
            while(fast != NULL){
                fast = fast->next;
            }
            slow = slow->next;
            if(fast == slow){
                return slow;
            }
        }
        return NULL;
    }
    Node* startpoint(Node* head){
        if(head = NULL){
            return NULL;
        }
        Node* slow = head;
        Node* inter = detectloop(head);
        while(inter != slow){
            inter = inter->next;
            slow = slow->next;
        }
        return slow;
    }
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(head ==  NULL){
            return;
        }
        Node* start = startpoint(head);
        Node* temp = start;
        while(temp->next != start){
            temp= temp->next;
        }
        temp->next = NULL;
        // code here
        // just remove the loop without losing any nodes
    }
};
