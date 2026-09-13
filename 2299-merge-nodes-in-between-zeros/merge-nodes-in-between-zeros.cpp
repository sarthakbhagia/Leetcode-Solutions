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
    ListNode* mergeNodes(ListNode* head) {
        ListNode * temp = head;
        ListNode * prev = NULL;
        ListNode * lastModified = NULL;

        while(temp!=nullptr && temp->next!=nullptr){
            if(temp->val==0){
                int newval = 0;
                prev = temp;
                temp=temp->next;

                while(temp != nullptr && temp->val!=0){
                    newval+=temp->val;
                    temp=temp->next;
                }
                prev->val = newval;
                prev->next = temp;
                lastModified = prev;
            }
        }

        if (lastModified != nullptr) {
            lastModified->next = nullptr;
        }

        return head;
    }
};