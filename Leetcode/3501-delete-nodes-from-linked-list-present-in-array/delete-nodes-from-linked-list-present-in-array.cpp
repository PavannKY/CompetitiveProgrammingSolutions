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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(!head) return nullptr;

        unordered_set<int> s(nums.begin(), nums.end());

        while(head && s.count(head->val))
        {
            // ListNode* temp = head;
            head = head->next;
            // delete temp;
        }

        ListNode* prev = head;
        ListNode* ptr = head ? head->next : nullptr;

        while(ptr != nullptr)
        {
            if(s.count(ptr->val))
            {
                prev->next = ptr->next;
                // delete ptr;
                ptr  = prev->next;
            }
            else
            {
                prev = ptr;
                ptr = ptr->next;
            }
        }

        return head;
    }
};