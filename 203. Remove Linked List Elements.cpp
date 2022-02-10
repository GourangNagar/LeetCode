/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        if(head==NULL) return head;
        while(temp->next)
        {
            if(temp->next->val==val)
                temp->next=temp->next->next;
            else
                temp=temp->next;
        }
        if(head->val==val) return head->next;
        return head;
    }
};









// OPTIMIZED CODE
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* p1 = dummy;
        ListNode* p2 = head;
        while(p2)
        {
            ListNode* nxt = p2->next;
            if (p2->val == val)
                p1->next = nxt;
            else 
                p1 = p2;
            p2 = nxt;
        }
        return dummy->next;
    }
};
