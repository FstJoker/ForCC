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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || k == 0) {
            return head;
        }
        int tot = 0;
        ListNode* tmp = head;
        while (tmp != nullptr && ++tot > 0) {
            tmp = tmp->next;
        }
        k %= tot;
        if (k == 0) return head;
        ListNode* fast = head;
        ListNode* slow = head;
        while (k--) {
            fast = fast->next;
        }
        while (fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* res = slow->next;
        slow->next = nullptr;
        fast->next = head;
        return res;
    }
};
