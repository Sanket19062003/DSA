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
        ListNode* i = l1;
        ListNode* j = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        int carry = 0;
        while(i != NULL || j != NULL || carry){
            int sum = 0;
            if(i != NULL){
                sum += i->val;
                i = i->next;
            }
            if(j != NULL){
                sum += j->val;
                j = j->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode* newNode = new ListNode(sum%10);
            curr->next = newNode;
            curr = curr->next;
        }
        return dummy->next;
    }
};