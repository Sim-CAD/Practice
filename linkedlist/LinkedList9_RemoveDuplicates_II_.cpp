   ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        
         if(head == NULL)
             return NULL;
    
            
        
        while(head && head->next){
            if(head->val == head->next->val){
                while(head->next && head->val == head->next->val){
                    head = head->next;
                }
                prev->next = head->next;
                
            }
            else{
                prev = prev->next; 
            }
         
            head = head->next;
            
        }
        return dummy->next;
        
    }