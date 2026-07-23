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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fastNode = head;
        ListNode* slowNode = head;
        for(int i=0;i<n;i++){
            fastNode = fastNode->next;
        }
        if(fastNode == NULL ) return head->next;
        while(fastNode->next != NULL){
            slowNode = slowNode->next;
            fastNode = fastNode->next;
        }
        ListNode* deleteNode = slowNode->next;
        slowNode->next = slowNode->next->next;
        delete deleteNode;
        return head;
    }
};