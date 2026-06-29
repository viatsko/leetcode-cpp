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
    ListNode * reverse(ListNode *head) {
        ListNode *newhead = nullptr;

        ListNode *node = head;
        while (node) {
            ListNode *next = node->next;
            node->next = newhead;
            newhead = node;
            node = next;
        }

        return newhead;
    }

    int pairSum(ListNode* head) {
        ListNode* tail = nullptr;
        ListNode* half_head = head;
        ListNode* half_node = head;
        while (half_node && half_node->next) {
            tail = half_head;
            half_head = half_head->next;
            half_node = half_node->next->next;
        }

        tail->next = nullptr;

        ListNode * reversed = reverse(half_head);
        int result = -INT_MAX;
        while (head && reversed) {
            result = max(head->val + reversed->val, result);
            head = head->next;
            reversed = reversed->next;
        }
        return result;
    }
};
