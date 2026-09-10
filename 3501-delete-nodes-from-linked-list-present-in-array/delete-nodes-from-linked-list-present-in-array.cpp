class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if (head == nullptr) {
            return head;
        }

        sort(nums.begin(), nums.end());

        ListNode * dummyhead = new ListNode(0, head);
        ListNode * prev = dummyhead;
        ListNode * temp = head;

        while (temp != nullptr) {
            if (binary_search(nums.begin(), nums.end(), temp->val)) {
                prev->next = temp->next;
                temp = temp->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }

        return dummyhead->next;
    }
};