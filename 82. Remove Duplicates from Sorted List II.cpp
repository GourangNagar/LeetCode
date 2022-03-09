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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return 0;
        if(!head->next) return head;
        
        ListNode* rest = head->next;
        int x = head->val;
        
        if(rest->val == x)
        {
            while(rest && rest -> val == x)
            {
                ListNode* temp = rest;
                rest = rest->next;
                delete(temp);
            }
            return deleteDuplicates(rest);
        }
        else
        {
            head->next = deleteDuplicates(rest);
            return head;
        }      
        
    }
};
