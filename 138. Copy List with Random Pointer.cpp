/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return NULL;
        Node* curr = head;
        while(curr)
        {
            Node* temp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = temp;
            curr = temp;
        }
        
        curr = head;
        while(curr)
        {
            if(curr->next)
                curr->next->random = curr->random ? curr->random->next : NULL;
            curr = curr->next->next;
        }
        
        Node* org = head;
        Node* copy = head->next;
        Node* res = copy;
        while(org)
        {
            org->next  = org->next->next;
            copy->next = copy->next ? copy->next->next : NULL;
            
            org = org->next;
            copy = copy->next;
            
        }
        return res;
        
    }
};
