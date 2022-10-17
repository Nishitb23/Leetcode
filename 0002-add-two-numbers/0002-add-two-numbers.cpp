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
        ListNode* head = NULL;
        ListNode* temp = head;
        int carry=0;
        
        while(l1 && l2){
            int sum= l1->val + l2->val +carry;
            carry = sum/10;
            sum %= 10;
            if(!head){
                head= new ListNode(sum);
                temp=head;
            }else{
                temp->next = new ListNode(sum);
                temp= temp->next;
            }
            l1= l1->next;
            l2= l2->next;
        }
        
        while(l1){
            int sum= l1->val +carry;
            carry = sum/10;
            sum %= 10;
            if(!head){
                head= new ListNode(sum);
                temp= head;
            }else{
                temp->next = new ListNode(sum);
                temp= temp->next;
            }
            l1= l1->next;
        }
        
        while(l2){
            int sum= l2->val +carry;
            carry = sum/10;
            sum %= 10;
            if(!head){
                temp= new ListNode(sum);
                head= temp;
            }else{
                temp->next = new ListNode(sum);
                temp= temp->next;
            }
            l2= l2->next;
        }
        
        if(carry){
            temp->next = new ListNode(carry);
        }
        
        return head;
        
    }
};