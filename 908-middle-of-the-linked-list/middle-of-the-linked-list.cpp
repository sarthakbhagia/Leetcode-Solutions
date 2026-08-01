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
    ListNode* middleNode(ListNode* head) {
        ListNode* turtle = head;
        ListNode* horse = head;
        while(horse!=nullptr && horse->next!=nullptr){
            turtle=turtle->next;
            horse=horse->next->next;
        }
        return turtle;
    }
};