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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head)
            return head;
        ListNode* slave = new ListNode(0, head);
        ListNode* tmp = slave;
        while (tmp->next && tmp->next->next) {
            if (tmp->next && tmp->next->val == tmp->next->next->val) {
                int itmp = tmp->next->val;
                while (tmp->next && tmp->next->val == itmp) {
                    tmp->next = tmp->next->next;
                }
            }
            else {
                tmp = tmp->next;
            }
        }
        return slave->next;
    }
};
