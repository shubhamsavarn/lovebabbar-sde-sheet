class Solution {
public:
    ListNode* FloydLoop(ListNode* head){
        if(head == NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow != NULL and fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
            }
            slow = slow->next;
            if(slow == fast){
                return slow;
            }
        }
        return NULL;
        
    }
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL){
            return NULL;
        }
        ListNode* inter = FloydLoop(head);
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow != inter){
            slow = slow->next;
            inter = inter->next;
        }
        return slow;
        
    }
};
