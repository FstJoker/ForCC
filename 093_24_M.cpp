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
	ListNode* swapPairs(ListNode* head) {
		ListNode* p = head, * s;
		if (p && p->next) {
			s = p->next;
			p->next = s->next;
			s->next = p;
			head = s;
			while (p->next && p->next->next) {
				s = p->next->next;
				p->next->next = s->next;
				s->next = p->next;
				p->next = s;
				p = s->next;
			}
		}
		return head;
	}
};