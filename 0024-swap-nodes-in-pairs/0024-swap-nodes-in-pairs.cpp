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
    ListNode* swapPairs(ListNode* head) {
        if(!head){
            return NULL;
        }else if(!head->next){
            return head;
        }
        
        ListNode* temp = swapPairs(head->next->next);
        head->next->next = head;
        ListNode* temp2 = head->next;
        head->next = temp;
        return temp2;
        
    }
};