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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odds_head = nullptr;
        ListNode *evens_head = nullptr;

        ListNode *odds = nullptr;
        ListNode *evens = nullptr;

        ListNode*node = head;
        int i = 0;
        while (node) {
            if (i % 2 == 0) {
                if (!odds) {
                    odds = node;
                    odds_head = node;
                } else {
                    odds->next = node;
                    odds = odds->next;
                }
            } else {
                if (!evens) {
                    evens = node;
                    evens_head = node;
                } else {
                    evens->next = node;
                    evens = evens->next;
                }
            }
            node = node->next;
            i++;
        }

        if (!odds) {
            return nullptr;
        }

        odds->next = evens_head;
        if (evens) {
        evens->next = nullptr;
        }
        return odds_head;
    }
};
