// Merge
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
ListNode* merge_sort(ListNode* head, int len)
{
  if (len == 0)
    return nullptr;
  if (len == 1)
  {
    head->next = nullptr;
    return head;
  }
  
  int half = len / 2;
  auto mid = head;
  for(int i = 0; i < half; ++i)
    mid = mid->next;
  
  auto l = merge_sort(head, half);
  auto r = merge_sort(mid, len - half);
  
  ListNode dummy;
  auto prev = &dummy;
  
  while(l || r)
  {
    if (l && (!r || l->val < r->val))
    {
      prev->next = l;
      l = l->next;
    }
    else
    {
      prev->next = r;
      r = r->next;
    }
    prev = prev->next;
  }
  return dummy.next;
}

ListNode* sortList(ListNode* head) {
  int len = 0;
  for(auto cur = head;
      cur != nullptr;
      cur = cur->next)
    ++len;
  
  return merge_sort(head, len);
}
};





// Quick
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
  ListNode* QuickSort(ListNode *head, ListNode *tail) {
	if(head == tail) return head;
	else if(head->next == tail) return head;

    ListNode *sentinel = new ListNode(-1, head);

    ListNode *pivot = head;
	ListNode *ptr = head->next;
	ListNode *preptr = head;
	bool isSorted;
    
	while(ptr!=tail && preptr->val <= ptr->val)
    {
		preptr = ptr;
		ptr = ptr->next;
	 }
	
    if(ptr == tail)	return pivot;
	
	ptr = head->next;
	preptr = head;
	while(ptr!=tail) {
		while(ptr!=tail && ptr->val >= pivot->val) {
			preptr = ptr;
			ptr = ptr->next;
		}
		if(ptr == tail) break;
		ListNode *newptr = ptr->next;
		ptr->next = sentinel->next;
		sentinel->next = ptr;
		preptr->next = newptr;
		ptr = newptr;
	}
	ListNode *top = sentinel->next;
	delete(sentinel);
	top = QuickSort(top, pivot);
	pivot->next = QuickSort(pivot->next, tail);
	return top;
 }
ListNode* sortList(ListNode* head) {
	return QuickSort(head, nullptr);
   }
};
