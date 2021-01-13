/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0;
        ListNode* temp1=headA;
while(temp1 != NULL)
{
    l1++;
    temp1=temp1->next;    
}
        int l2=0;
        ListNode* temp2=headB;
        while(temp2 !=NULL)
        {
            l2++;
            temp2=temp2->next;
        }
        ListNode* t=headA;
        ListNode* q=headB;
        if(t == q)
            return t;
        if(l1<l2){
        int d=l2-l1;
        while(d--)
        {
            if(q == NULL)
            {
                return NULL;
            }
            q=q->next;
        }
        while(q != t)
        {
            t=t->next;
            q=q->next;}
            //if(t == q)
                return q;}

        else
        {
            int d=l1-l2;
        while(d--)
        {if(t == NULL)
            {
                return NULL;
            }
            t=t->next;
        }
            while(q !=t)
        {
            t=t->next;
            q=q->next;
            }
                return q;
        
        }
        return NULL;
        
    }
};
