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
    void printList(ListNode* head) {
        while (head != nullptr) {
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;

        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }

        return prev;
    }

    ListNode* findMiddleprev(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            fast = fast->next->next;
            if(fast==nullptr) continue;
            slow = slow->next;
        }

        return slow;
    }
    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }

    int pairSum(ListNode* head) {
        ListNode* mid = findMiddleprev(head);
        // cout<<mid->val;
        mid->next = reverseList(mid->next);
        // printList(head);
        mid = findMiddle(head);

        int sum=0;
        while(mid)
        {
            int temp = (head->val) + (mid->val);
            // cout<<head->val;
            // cout<<mid->val<<endl;
            if(temp>sum)
            {
                sum = temp;
            }
            head = head->next;
            mid = mid->next;
        }

        return sum;

    }
};