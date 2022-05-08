ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == NULL || headB == NULL)
            return NULL;
        
        int lengthA = 0, lengthB = 0;
        
        
        ListNode* currentA = headA; 
        while(currentA){
            lengthA++;
            currentA = currentA->next;
        }
        
        ListNode* currentB = headB;
        while(currentB){
            lengthB++;
            currentB = currentB->next;
        }
        
        int skip = abs(lengthA - lengthB);
        
        
            if(lengthA > lengthB){
                while(skip){
                headA= headA->next;
                skip--;
                }
            } if(lengthA < lengthB){
                while(skip){
                headB= headB->next;
                skip--;
                }
            }
        
        
        while(headA || headB){
            if(headA == headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
                
        }
        
        return NULL;
        
    }