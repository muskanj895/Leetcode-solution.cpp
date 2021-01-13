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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head)
        return head;
        int n=1;
        ListNode* temp=head;
        
            while(temp->next != NULL)
            {
                n++;
                temp=temp->next;
            }
        if(k>n)
            k=k%n;
        k=n-k;
        if(k == 0 || k == n)
            return head;
        ListNode* current =head;
        int count=1;
        while(current != NULL && count<k )
        {
            current=current->next;
            count++;
        }
        if (current == NULL)
        return head;
 
        ListNode* kthNode=current;
        temp->next=head;
        head=kthNode->next;
        kthNode->next =NULL;
        return head;
        
        
    }
};
