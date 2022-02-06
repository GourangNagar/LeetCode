// BRUTE FORCE PALINDROME
class Solution {
public:
   ListNode* reverse(ListNode* head) {
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
    
     ListNode* middle(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=NULL && fast->next != NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;        
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode *mid = middle(head);
        ListNode *h = reverse(mid);
        ListNode *l=head;
        while(h!=NULL)
        {
            if(l->val != h->val)
                return false;
            l=l->next;
            h=h->next;
        }
         return true; 
    }
};








// OPTIMAL SOLUTION
class Solution {
public:
    bool isPalindrome(ListNode* head) {
    ListNode *fast = head, *mid = head;
    ListNode *prev = NULL;
        while(fast && fast->next) {
            mid = mid->next;
            fast = fast->next->next;
            head->next = prev;
            prev = head;
            head = mid;
        }
        if(fast)
            mid = mid->next;
        while(mid)
        {
            if(prev->val != mid->val)
                return false;
            prev = prev->next;
            mid = mid->next;
        }
        return true;
     }
};
