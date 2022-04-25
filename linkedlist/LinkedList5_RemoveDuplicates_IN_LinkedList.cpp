 ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL)
            return head;
        
        ListNode *cur = head;
        
        while(cur->next){
            
         ListNode *node_next = cur->next;
            
            if(node_next->val == cur->val){
                cur->next = cur->next->next;
            }
            else{
                cur = node_next;
            }
        }
        return head;
    }