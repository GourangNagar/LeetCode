// ITERATIVE METHOD
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;

        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *next = NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
    }
};







// USING RECURSION
class Solution {
public:
    
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* newhead = reverseList(head->next);
        ListNode* headnext = head->next;
        headnext->next=head;
        head->next = NULL;
        return newhead;
    }
};
