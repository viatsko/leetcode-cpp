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
        if (!head->next) {
            return nullptr;
        }
        ListNode* prev = head;
        ListNode* p1 = head;
        ListNode* p2 = head;

        while (p2->next && p2->next->next) {
            prev = p1;
            p1 = p1->next;
            p2 = p2->next->next;
        }

        if (p2->next) {
            p1->next = p1->next->next;
        } else {
            prev->next = prev->next->next;
        }

        return head;
    }
};
