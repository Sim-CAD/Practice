 ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return head;
        
        while(head != NULL && head->val == val)
            head= head->next;
        
        ListNode *cur  = head;
        
        while(cur && cur->next){  
            
            if(val == cur->next->val){
                cur->next = cur->next->next;
            }else{
               cur = cur ->next;
            }
        }
        
        return head;
    }