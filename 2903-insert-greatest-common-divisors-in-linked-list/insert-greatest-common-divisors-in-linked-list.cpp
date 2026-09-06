class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode * temp = head;

        while (temp != nullptr && temp->next != nullptr) {
            int gcdVal = gcd(temp->val, temp->next->val);
            ListNode * New = new ListNode(gcdVal);

            New->next = temp->next;
            temp->next = New;
            temp = New->next;
        }

        return head;
    }
};