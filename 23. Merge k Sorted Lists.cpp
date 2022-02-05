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
  // MERGING 2 LISTS
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
    // MERGING K LISTS USING MERGING TWO LISTS
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int n = lists.size();
        if(n==0)
            return NULL;
        
        ListNode *ans = lists[0];
        for(int i=1; i<n ;i++)
            ans = mergeTwoLists(ans,lists[i]);
        return ans;
        
    }
};
