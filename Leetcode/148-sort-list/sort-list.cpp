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

    ListNode* merge(ListNode* l1,ListNode* l2)
    {
        ListNode* n = nullptr;
        ListNode* lis = n;
        while(l1 && l2)
        {
            ListNode* temp;

            if(l1->val < l2->val)
            {
                    temp = new ListNode(l1->val);
                    l1 = l1->next;
            }
            else
            {
                temp = new ListNode(l2->val);
                l2 = l2->next;
            }

            if(!n)
            {
                n = temp;
                lis = n;
            }

            else
            {
                lis->next = temp;
                lis = lis->next;
            }
        }

        if(!n) return l1?l1:l2;

        if(l1) lis->next = l1;
        else lis->next = l2;

        return n;
    }

    ListNode* sortList(ListNode* head) {
        if(!head||!head->next)
        {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

        }

        ListNode* mid = slow->next;
        slow->next = nullptr;

        ListNode *left = sortList(head);
        ListNode *right = sortList(mid);

        return merge(left,right);
        
    }
};