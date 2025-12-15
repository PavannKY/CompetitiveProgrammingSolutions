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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head==nullptr)
        {
            return head;
        }
        if(head->next == nullptr)
        {
            return nullptr;
        }

        int n = -1;
        ListNode *ptr = head;
        while(ptr!= nullptr)
        {
            ptr = ptr->next;
            n++;
        }

        // cout<<n;

        if(n==1)
        {
            head->next = nullptr;
            return head;
        }

        ptr = head->next;
        ListNode *prev = head;
        
        int num;

        if(n%2==0)
        {
            num = n/2;
        }
        else
        {
            num = (n/2) + 1;
        }

        // cout<<num;

        while(num>1)
        {
            prev = ptr;
            ptr = ptr->next;
            num--;
        }
        // cout <<endl<< prev->val<<endl;
        // cout << ptr->val;

        prev->next = ptr->next;
        // delete ptr;

        return head;
    }
};