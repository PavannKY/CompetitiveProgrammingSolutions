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
    bool isPalindrome(ListNode* head) {
        ListNode* ptr = head;
        vector<int> arr;
        while(ptr)
        {
            arr.push_back(ptr->val);
            ptr = ptr->next;
        }

        vector<int> n = arr;
        reverse(n.begin(), n.end());
        return arr==n;
    }
};