class Node{
    public:
        int val;
        Node* next;
    Node(){
        val = -1;
        next = NULL;
    }
    Node(int _data){
        val = _data;
        next = NULL;
    }
};
class MyLinkedList {
public:
    Node *head;
    Node *tail;
    int length;
    
    
    MyLinkedList() {
        this-> head = NULL;
        this-> tail = NULL;
        length = 0;
    }
    
    int get(int index) {
        if(index >= length)
            return -1;
        Node *tmp = head;
        for(int i = 0; i < index; i++){
            tmp = tmp->next;
        }
        return tmp->val;
    }
    
    void addAtHead(int val) {
        Node *newHead = new Node(val);
        if(!head && !tail){
            this->head = newHead;
            this->tail = newHead;
        }else{
            newHead->next = head;
            head = newHead;
        }
        length++;
    }
    
    void addAtTail(int val) {
        Node *newTail = new Node(val);
        if(!head && !tail){
            this->head = newTail;
            this->tail = newTail;
        }else{
            tail->next = newTail;
            tail = newTail;
        }
        length++;
    }
    
    void addAtIndex(int index, int val) {
        if(index > this->length) return;
        
        if(index == 0){
            this->addAtHead(val);
            return;
        }
        
        if(index == length){
            this->addAtTail(val);
            return;
        }
        
        Node *nodeAtIndex = new Node(val);
        Node *current = head; 
        for(int i = 0; i < index - 1; i++){
            current = current->next;
        }
        nodeAtIndex->next = current->next;
        current->next = nodeAtIndex;
        length++;
    }
    
    void deleteAtIndex(int index) {
        if(index >= this->length ) return;
        
        if(index == 0){
            Node *tmp = head;
            head = head->next;
            delete tmp;
        }
        
        else if (length - 1 == index){
            Node* tmp = head;
            while(tmp->next != tail){
                tmp = tmp->next;
            }
            delete tail;
            tail = tmp;
        }
        
        else{
            Node* prev = NULL;
            Node* tmp = head;
            
            for(int i = 0; i< index; i++){
                prev = tmp;
                tmp = tmp->next;
            }
            prev->next = tmp->next;
            delete tmp;
        }
        this->length--;
    }
};
