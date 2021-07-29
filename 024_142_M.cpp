/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    //快慢指针 蓝桥杯用过
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head, * fast = head;
        do {
            if (!fast || !fast->next) return nullptr;
            fast = fast->next->next;
            slow = slow->next;
        } while (fast != slow);
        fast = head;
        while (fast != slow) {
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
    }
};