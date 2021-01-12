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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* cur = head;
       ListNode* prev = head;
        while(n-- > 0) {
            cur = cur->next;
        }
        if (cur == NULL) 
            return head->next;
        while (cur->next != NULL) {
            cur = cur->next;
            prev = prev->next;
        }
        prev->next = prev->next->next;
        return head;
        
    }
};
