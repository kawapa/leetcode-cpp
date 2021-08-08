/*
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* root = new ListNode;
        ListNode* current = root;
   
        int toAdd = 0;
        int sum = 0;
        while (l1 || l2) {
            sum = toAdd;
            sum += l1 ? l1->val : 0;
            sum += l2 ? l2->val : 0;
            toAdd = sum / 10;
            
            current->next = new ListNode(sum % 10);
            current = current->next;
            
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        if (toAdd) {
            current->next = new ListNode(toAdd);
        }
        
        return root->next;
    }
};
