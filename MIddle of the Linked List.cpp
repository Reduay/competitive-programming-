class Solution {
    public: ListNode * middleNode(ListNode * head) {
        ListNode * slow;
        ListNode * fast;
        slow=head;
        fast=head->next;
        
        while(fast!=NULL && fast->next != NULL){
            fast=fast->next;
            slow=slow->next;
}
        return slow;
    }
};
