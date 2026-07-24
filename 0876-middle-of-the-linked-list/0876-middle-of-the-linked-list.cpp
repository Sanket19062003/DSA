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
    ListNode* middleNode(ListNode* head) {
        ListNode* fastNode = head;
        ListNode* slowNode = head;
        while(fastNode != NULL && fastNode->next != NULL){
            slowNode = slowNode->next;
            fastNode = fastNode->next->next;
        }
        return slowNode;
    }
};