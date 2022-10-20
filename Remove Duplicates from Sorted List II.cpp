/*linked list :is a sequence of elements,
 where each element links to the next element
 Dummy Nodes: is an empty node that usually points to the first actual node   */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        
        
          ListNode *dummy=new ListNode(0,head); //Initalize new empty dummy linkedlist
       ListNode *prev=dummy;
        
        while(head!=NULL){
       
        if(head->next!=NULL && head->val==head->next->val){
                
while(head->next!=NULL && head->val==head->next->val)//until head->val!=head->next->value do the while loop
                            head=head->next;
                     
                   prev->next=head->next;
                        
                }
                
                else prev=prev->next;
                       
               
                head=head->next;
        }
        
        return dummy->next;
            
    
    }
};