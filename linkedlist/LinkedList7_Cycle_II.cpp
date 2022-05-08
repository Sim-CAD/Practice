    ListNode *detectCycle(ListNode *head) {
        ListNode* slow, *fast;
        
        if(head == NULL ||head->next == NULL|| head->next->next == NULL){
            return NULL;
        }
        
        slow = head;
        fast = head;
        
        while(fast && fast->next){
            
            slow = slow->next;
            fast = fast->next->next;
           
            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
            
        }
        
        return NULL;
    }