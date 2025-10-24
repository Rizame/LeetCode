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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;
       ListNode *fast = head;
       while(fast->next){
            fast = fast->next->next;
            head = head->next;
            if(!fast) return false;
            if(fast == head) return true;
       }
       return false;
    }
};