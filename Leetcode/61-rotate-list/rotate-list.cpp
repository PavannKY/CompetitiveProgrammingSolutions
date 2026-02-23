class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0) return head;

        ListNode * ptr = head;
        int n = 0;
        while(ptr)
        {
            n += 1;
            ptr = ptr->next;
        }

        if(n == 1) return head;

        k = k % n;
        if(k == 0) return head;

        int rot = n - k - 1;

        ptr = head;
        for(int i = 0; i < rot; i++)
        {
            ptr = ptr->next;
        }

        ListNode* ptr2 = ptr->next;
        ptr->next = nullptr;

        ListNode* ptr3 = ptr2;
        while(ptr3->next)
        {
            ptr3 = ptr3->next;
        }

        ptr3->next = head;

        return ptr2;
    }
};