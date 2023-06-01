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
    void Print(ListNode* head) {
        ListNode* curr = head;
        while (curr != nullptr) {
            cout << curr->val << ' ';
            curr = curr->next;
        }
        cout << '\n';
    }
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return head;

        ListNode* next, * cur, * prev = nullptr;
        cur = next = head;

        while (cur != nullptr) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
        //Print(head)

        return head;
    }
};