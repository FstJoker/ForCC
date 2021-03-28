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
        ListNode* res = new ListNode(-1, head);
        ListNode* prev = res;
        while (prev->next && prev->next->next) {
            if (prev->next && prev->next->val == prev->next->next->val) {
                prev->next = prev->next->next;
            }
            else {
                prev = prev->next;
            }
        }
        return res->next;
    }
};