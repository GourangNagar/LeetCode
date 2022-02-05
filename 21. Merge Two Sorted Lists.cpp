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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* NewNode = new ListNode();
        ListNode* temp = NewNode;
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val < l2->val)
            {
                NewNode->next = l1;
                l1=l1->next;
            }
            else
            {
                NewNode->next = l2;
                l2=l2->next;
            }
            NewNode = NewNode->next;
        }
        
        if(l1 != NULL)
        {
            NewNode->next = l1;
            l1=l1->next;
        }
       if(l2 != NULL)
        {
            NewNode->next = l2;
            l2=l2->next;
        }
        return temp->next;  
    }
};








// OPTIMAL SOLUTION VIA RECURSION
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* NewNode;
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        
        if(l1->val < l2->val)
        {
            NewNode = l1;
            NewNode->next = mergeTwoLists(l1->next,l2);
        }
        else
        {
            NewNode = l2;            
            NewNode->next = mergeTwoLists(l1,l2->next);
        } 
        return NewNode;
    }
};
