/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev{NULL}, *curr{head};
        while (curr != NULL) {
            ListNode *temp{curr->next};
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};
