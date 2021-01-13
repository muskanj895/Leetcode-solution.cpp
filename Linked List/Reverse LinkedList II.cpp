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
    ListNode* reverse(ListNode* head)
    {
        ListNode* current=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
         while(current != NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* revs=NULL;
        ListNode* rev_pre=NULL;
        ListNode* revnd=NULL;
        ListNode* revend_next=NULL;
       if(m==n)
           return head;
        int i=1;
        ListNode* curr=head;
        while(curr && i<=n)
        {
            if(i<m)
                rev_pre=curr;
            if(i == m)
                revs=curr;
            if(i==n)
            {
                revnd=curr;
                revend_next=curr->next;
            }
            curr=curr->next;
            ++i;
        }
        revnd->next=NULL;
        revnd=reverse(revs);
        if(rev_pre)
        {
            rev_pre->next=revnd;
        }
        else
        {
            head=revnd;
        }
        revs->next=revend_next;
        return head;
        
    }
};
