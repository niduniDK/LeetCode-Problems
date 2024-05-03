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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node1 = new ListNode();
        ListNode* tail = node1;
        int remainder = 0;
        while (l1 || l2 || remainder!=0){
            int value = remainder;
            if(l1){
                value += l1->val;
                l1 = l1->next;
            }
            if(l2){
                value += l2->val;
                l2 = l2->next;
            }
            remainder = value / 10;
            if(remainder > 0){
                value %= 10;
            }
            ListNode* res = new ListNode(value);
            tail->next = res;
            tail = tail->next;
        }
        
        
        return node1->next;
    }
};
