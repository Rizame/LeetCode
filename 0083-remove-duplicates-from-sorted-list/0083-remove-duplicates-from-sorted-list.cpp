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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* start = new ListNode(0, head);
        ListNode* ahead = new ListNode(head->next->val, head->next->next);
        while(ahead != nullptr){
            if(head->val == ahead->val){
                while(ahead->next != nullptr && head->val == ahead->next->val){
                    ahead = ahead->next;
                }
                head->next = ahead->next;
                if(ahead-> next != nullptr) ahead = ahead->next;
                else break;
            }
            else{
                head = head->next;
                ahead = ahead->next;
            }
        }
        return start->next;
    }
};