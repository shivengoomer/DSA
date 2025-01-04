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
    ListNode* removeElements(ListNode* head, int val) {
      while (head != nullptr && head->val == val) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
        }
        ListNode* temp = head;
        ListNode* prevnode = nullptr;

        while (temp != nullptr) {
            if (temp->val == val) {
                if (prevnode != nullptr) {
                    prevnode->next = temp->next;
                }
                ListNode* toDelete = temp;
                temp = temp->next; 
                delete toDelete;   
            } else {
                prevnode = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};