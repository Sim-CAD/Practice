 void reorderList(ListNode* head) {
        
        if(head == NULL)
            return;
        
        //Get the mid of the linkedlist
        ListNode* slow = head;
        ListNode* fast = head;
        
       
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next; 
        }
        
        //Reverse the linked list
         ListNode* prev = NULL;
         ListNode*current = slow;
         ListNode* current_next;
        
        while(current){
            current_next = current->next;
            current->next = prev;
            prev = current;
            current = current_next;
        }
       
        //Merging two linkedlist
        ListNode* n1 = head;
        ListNode* n2 = prev;
        ListNode* n1_next;
        ListNode* n2_next;
      
        
        while(n1->next && n2->next){
            n1_next = n1->next;//2
            n1->next = n2; //1->5
            n1 = n1_next;//2
            
            
            n2_next = n2->next; //4
            n2->next = n1; //1->5->2
            n2 = n2_next;

            
        }
        
      
        
    }