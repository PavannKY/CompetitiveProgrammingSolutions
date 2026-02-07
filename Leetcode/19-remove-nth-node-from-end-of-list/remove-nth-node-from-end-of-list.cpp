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
        ListNode *ptr = head;
        int count = 0;
        while(ptr!=nullptr)
        {
            count++;
            ptr = ptr->next;
        }
        // cout<<count<<endl;
        if(count == 1 || count == n) return head->next;
        int num = count-n;
        ListNode *p2 = head;
        ListNode *p1 = head->next;
        for(int i = 0;i<num-1;i++)
        {
            p2 = p1;
            p1=p1->next;
        }
        // if(p1) cout<<p1->val<<endl;
        // if(p2) cout<<p2->val<<endl;
        p2->next = p1->next;
        delete p1;        
        return head;
    }
};