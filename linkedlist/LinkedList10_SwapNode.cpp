ListNode* swapPairs(ListNode* head) {
        
        ListNode* dummy = new ListNode(0, head);
        
        if(head == NULL)
            return  NULL;
        
        dummy->next = head;
        ListNode* node = dummy;
        ListNode* second_next;

        while(node){
            
            ListNode* first = node->next;
            ListNode* second = (first) ? first->next : NULL;
            
            if(second){
            second_next = second->next;
            second->next = first;
            node->next = second;
            first->next = second_next;
            }
            
            node = first;
            
        }
        return dummy->next;
        
    }