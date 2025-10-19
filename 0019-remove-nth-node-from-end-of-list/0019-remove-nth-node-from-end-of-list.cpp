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
        if(!head->next) return nullptr;
        ListNode* sentinel = new ListNode(-1, head);
        ListNode* temp = new ListNode(-1, head);
        int count = 1;
        for(int i = 0; i < n-1;i++){
            head = head->next;
            count++;
            if(!head) return nullptr;
        }
        while(head->next){
            head = head->next;
            temp = temp->next;
            count++;
        }
        if(count == n){
            sentinel = sentinel->next;
        }
        else temp->next = temp->next->next;
        return sentinel->next;
    }
};