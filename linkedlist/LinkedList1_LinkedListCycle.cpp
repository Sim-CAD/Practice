   bool hasCycle(ListNode *head) {
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(slow && slow->next != NULL && fast && fast->next && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast) //Loop detected
                return 1;  
        }
        return 0;
    }